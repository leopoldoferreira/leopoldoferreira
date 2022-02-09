package Interface;

import java.awt.Color;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.JTextField;

public class Exercício1 extends JFrame {

	private JLabel lblEx1;
	private JButton btnEx1;
	static JPanel painel = new JPanel();
	static int cont=0;
	public Exercício1(){
		//configuro o título da janela
		super("Exercício 1");
		lblEx1 = new JLabel ("Olá Mundo!");
		btnEx1 = new JButton("Mudar");
		
		painel.add(lblEx1);
		painel.add(btnEx1);
		
		
		MudarCor mc = new MudarCor();
		btnEx1.addActionListener(mc);


		add(painel);
		setSize(200,200);
		setVisible(true);
		
	}
	class MudarCor implements ActionListener {

		public void actionPerformed(ActionEvent arg0) {
		if(cont==0){
			painel.setBackground(Color.red);
			cont++;
		}else
		if(cont==1){
			lblEx1.setForeground(Color.blue);
			cont++;
		}else
		if(cont==2){
			btnEx1.setBackground(Color.yellow);
			cont++;
		}
		}
		
	}
	
}