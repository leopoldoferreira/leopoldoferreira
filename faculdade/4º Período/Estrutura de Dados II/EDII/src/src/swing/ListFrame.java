package swing;

import java.awt.Color;

import javax.swing.JFrame;
import javax.swing.JList;
import javax.swing.JPanel;
import javax.swing.JScrollPane;
import javax.swing.ListSelectionModel;
import javax.swing.event.ListSelectionEvent;
import javax.swing.event.ListSelectionListener;

public class ListFrame extends JFrame {

	private JPanel painel;
	private JList lista;
	
	private Color[] cores = new Color[] {
		Color.BLACK,
		Color.BLUE, Color.CYAN, Color.DARK_GRAY,
		Color.GREEN, Color.MAGENTA, Color.ORANGE,
		Color.PINK, Color.RED, Color.YELLOW
	};
	
	private String[] opcoes = new String[]{
		"Preto", "Azul", "Ciano", "Cinza escuro",
		"Verde", "Magenta", "Laranja", "Rosa",
		"Vermelho", "Amarelo"
	};
	
	public ListFrame() {
		
		super("Exemplo JList");
		
		lista = new JList(opcoes);
		lista.setVisibleRowCount(5);
		lista.setSelectionMode(ListSelectionModel.SINGLE_SELECTION);
		
		// criar uma classe anonima
		ListSelectionListener ouvidor = new ListSelectionListener() {

			@Override
			public void valueChanged(ListSelectionEvent arg0) {
				int indice = lista.getSelectedIndex();
				Color cor = cores[indice];
				painel.setBackground(cor);
			}
			
		};
		
		lista.addListSelectionListener(ouvidor);
		
		JScrollPane rolagem = new JScrollPane(lista);
		
		painel = new JPanel();
		painel.add(rolagem);
		
		add(painel);
		setSize(300, 200);
	}
	
	
	
	
	
	
	
	
}
