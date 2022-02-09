package TrabalhoDb;
//FADRIQUE BRITO
import java.awt.Color;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.Random;

import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextField;

public class Exe11_15 extends JFrame{
	
	Random numCerto = new Random();
	 int x = numCerto.nextInt(1000)+1;
	 
	
	
	
	private JTextField texto;
	private JLabel lbl1;
	private JLabel lbl2;
	private JPanel painel;
	private JLabel lbl;
	
	public Exe11_15(){
		
		texto = new JTextField(5);
		lbl1 = new JLabel("Tenho um número entre 1-1000. Você pode adivinhar?");
		lbl2 = new JLabel("Digite sua tentativa:");
		lbl = new JLabel("tente ...");
		
		painel = new JPanel();
		painel.add(lbl1);
		painel.add(lbl2);
		painel.add(texto);
		painel.add(lbl);
		
		Verifica e = new Verifica();
		texto.addActionListener(e);
		
		add(painel);
		setSize(400,100);
		
		//System.out.printf(""+x);
	}
	
	class Verifica implements ActionListener{

		@Override
		public void actionPerformed(ActionEvent e) {
			
			String msg = texto.getText();
			int num = Integer.parseInt(msg);
			
			if(x-num>300 && x-num<=999){
				lbl.setText("Muito baixo");
				painel.setBackground(Color.blue);
			}
			else if(x-num>100 && x-num<=300){
				lbl.setText("Baixo");
				painel.setBackground(Color.cyan);
			}
			else if(x-num>50 && x-num<=100){
				lbl.setText("Um pouquinho baixo");
				painel.setBackground(Color.ORANGE);
			}
			else if(x-num>1 && x-num<=50){
				lbl.setText("Próximo! Mas ainda está baixo!");
				painel.setBackground(Color.red);
			}
			//negativos
			if(x-num<-300 && x-num>=-999){
				lbl.setText("Muito alto!");
				painel.setBackground(Color.blue);
			}
			else if(x-num<-100 && x-num>=-300){
				lbl.setText("Alto");
				painel.setBackground(Color.cyan);
			}
			else if(x-num<-50 && x-num>=-100){
				lbl.setText("Um pouquinho alto!");
				painel.setBackground(Color.ORANGE);
			}
			else if(x-num<-1 && x-num>=-50){
				lbl.setText("Próximo! Mas ainda está alto!");
				painel.setBackground(Color.red);
			}
			else if(x-num==0){
				painel.setBackground(Color.green);
				lbl.setText("CORRETO!!!");	
				texto.setEditable(false);
			}
			
	}
	}
}


