package TrabalhoDb;
//FADRIQUE BRITO
import java.awt.BorderLayout;
import java.awt.GridLayout;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JTextField;
import javax.swing.SwingConstants;

public class Exe11_09 extends JFrame{
	
	
		private JPanel painel;
		private JPanel painelCalc;
		private JPanel painelcampo;
		private JTextField campo;
		private JButton sete;
		private JButton oito;
		private JButton nove;
		private JButton divi;
		private JButton quatro;
		private JButton cinco;
		private JButton seis;
		private JButton vezes;
		private JButton um;
		private JButton dois;
		private JButton tres;
		private JButton menos;	
		private JButton zero;
		private JButton ponto;
		private JButton igual;
		private JButton soma;
		
		public Exe11_09(){
			super("Calculadora");
			painel = new JPanel(new BorderLayout());
						
			painelCalc = new JPanel(); 
			
			campo = new JTextField();
			
			
			sete = new JButton("7");
			oito = new JButton("8");
			nove = new JButton("9");
			divi = new JButton("/");
			
			quatro = new JButton("4");
			cinco = new JButton("5");
			seis = new JButton("6");
			vezes = new JButton("*");
			
			um = new JButton("1");
			dois = new JButton("2");
			tres = new JButton("3");
			menos = new JButton("-");
			
			zero = new JButton("0");
			ponto = new JButton(".");
			igual = new JButton("=");
			soma = new JButton("+");
			
			
			painel.add(campo, BorderLayout.NORTH);
			painel.add(painelCalc,BorderLayout.CENTER);
			
			painelCalc.setLayout(new GridLayout(4,4));
			
			painelCalc.add(sete);
			painelCalc.add(oito);
			painelCalc.add(nove);
			painelCalc.add(divi);
			
			painelCalc.add(quatro);
			painelCalc.add(cinco);
			painelCalc.add(seis);
			painelCalc.add(vezes);
			
			painelCalc.add(um);
			painelCalc.add(dois);
			painelCalc.add(tres);
			painelCalc.add(menos);
			
			painelCalc.add(zero);
			painelCalc.add(ponto);
			painelCalc.add(igual);
			painelCalc.add(soma);
		
			add(painel);
			setSize(250,300);
			
		}
}
