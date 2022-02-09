package TrabalhoDb;
//FADRIQUE BRITO
import java.awt.BorderLayout;
import java.awt.FlowLayout;

import javax.swing.JButton;
import javax.swing.JCheckBox;
import javax.swing.JComboBox;
import javax.swing.JFrame;
import javax.swing.JPanel;

public class Exe11_10 extends JFrame {

	private JComboBox escolha;
	private JCheckBox back;
	private JCheckBox fore;
	private JButton ok;
	private JButton cancel;
	private JPanel painel;
	private JPanel painel2;
	private JPanel painel3;
	
	
	private String[] red = new String[]{
			
			"RED"
				
		};
	
	
	
	public Exe11_10(){
		
		setTitle("ColorSelect");
		 painel = new JPanel();
		 painel.setLayout(new BorderLayout());
		 
		 painel2 = new JPanel();
		 painel3 = new JPanel();
		 
		 
		 escolha = new JComboBox(red);
		 back = new JCheckBox("BackGround");
		 fore = new JCheckBox("Foreground");
		 ok = new JButton("OK");
		 cancel = new JButton("Cancel");
		 
		 painel.add(escolha,BorderLayout.NORTH);
		 painel.add(painel2);
		 painel2.add(back);
		 painel2.add(fore);
		 painel.add(painel3,BorderLayout.SOUTH);
		 painel3.add(ok);
		 painel3.add(cancel);
		 
		 	add(painel);
			setSize(300,130);
		
	}
	
}
