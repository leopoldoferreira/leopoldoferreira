package excecoes;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.JTextField;

public class PilhaInterface extends JFrame implements ActionListener {

	private JTextField tfPush;
	private JButton btnPush;
	private JButton btnPop;
	private JTextField tfPop;
	private Pilha pilha;
	
	private JPanel painel;
	
	public PilhaInterface() {
		
		super("Teste de pilha");
		
		tfPush = new JTextField(5);
		tfPop = new JTextField(5);
		
		btnPush = new JButton("Push");
		btnPop = new JButton("Pop");

		pilha = new Pilha(5);
		
		painel = new JPanel();
		painel.add(tfPush);
		painel.add(btnPush);
		painel.add(btnPop);
		painel.add(tfPop);
		
		add(painel);
		setSize(300, 150);
		
		btnPush.addActionListener(this);
		btnPop.addActionListener(this);
		
	}

	@Override
	public void actionPerformed(ActionEvent e) {
		
		if (e.getSource() == btnPush) {
			int elemento = Integer.valueOf(tfPush.getText());
			try {
				pilha.push(elemento);
			} catch (PilhaCheiaException e1) {
				JOptionPane.showMessageDialog(null, "Pilha Cheia");
			}
			
		} else if (e.getSource() == btnPop) {
			try {
				int elemento = pilha.pop();
				tfPop.setText(""+elemento);
			} catch (PilhaVaziaException e1) {
				JOptionPane.showMessageDialog(null, "Pilha Vazia");
			}
		}
		
	}
	
}
