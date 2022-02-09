package swing;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JList;
import javax.swing.JPanel;
import javax.swing.JScrollPane;
import javax.swing.ListSelectionModel;

public class JlistFrame2 extends JFrame {
	
	private JList lista1;
	private JList lista2;
	private JButton btnCopiar;
	private JPanel painel;
	
	public JlistFrame2() {
		
		super("Exemplo 2 de JList");
		
		painel = new JPanel();
		lista1 = new JList(new String[]{
				"Azul", "Amarelo", "Roxo",
				"Verde", "Preto", "Vermelho",
				"Marrom", "Laranja", "Branco"
		});
		lista2 = new JList();
		btnCopiar = new JButton("Copiar >>>");
		
		JScrollPane rolagem1 = new JScrollPane(lista1);
		JScrollPane rolagem2 = new JScrollPane(lista2);
		
		lista1.setVisibleRowCount(5);
		lista2.setVisibleRowCount(5);
		
		lista2.setFixedCellWidth(100);
		lista2.setFixedCellHeight(15);
		
		lista1.setSelectionMode(ListSelectionModel.MULTIPLE_INTERVAL_SELECTION);
		lista2.setSelectionMode(ListSelectionModel.SINGLE_SELECTION);
		
		painel.add(rolagem1);
		painel.add(btnCopiar);
		painel.add(rolagem2);
		
		add(painel);
		setSize(400, 150);
		
		btnCopiar.addActionListener(new ActionListener() {

			@Override
			public void actionPerformed(ActionEvent arg0) {
				Object[] selecionados = lista1.getSelectedValues();
				lista2.setListData(selecionados);
			}
			
		});
	}

}
