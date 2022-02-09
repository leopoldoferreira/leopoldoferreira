package TrabalhoDb;
//FADRIQUE BRITO
import java.awt.BorderLayout;
import java.awt.Container;
import java.awt.FlowLayout;
import java.awt.GridLayout;

import javax.swing.Box;
import javax.swing.JButton;
import javax.swing.JCheckBox;
import javax.swing.JComboBox;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JRadioButton;

public class Exe11_11 extends JFrame {
	
	private JPanel painel;
	private JLabel printer;
	private JLabel printQ;
	private JCheckBox image;
	private JCheckBox text;
	private JCheckBox Code;
	private JComboBox high;
	private JCheckBox printFile;
	private JRadioButton selection;
	private JRadioButton all;
	private JRadioButton aplett;
	private JButton ok;
	private JButton cancel;
	private JButton setup;
	private JButton help;
	
	private JLabel aux1;
	private JLabel aux2;
	private JLabel aux3;
	private JLabel aux4;
	private JLabel aux5;
	private JLabel aux6;


	public Exe11_11() {
		super("Printer");
		painel = new JPanel(new BorderLayout()); //painel principal - fundo
		
		JPanel painelD = new JPanel(new GridLayout(4,1,0,5)); //painel da direita (botões)

		JPanel painelC= new JPanel(new BorderLayout());//painel da esquerda
		JPanel painelCn = new JPanel(new FlowLayout());//painel da esquerda NORTE
		JPanel painelCs = new JPanel();//painel da esquerda SUL
		
		
		JPanel painelCc = new JPanel(new BorderLayout()); //painel da esquerda CENTRO
		
		JPanel painelCcE = new JPanel(new GridLayout(3,2,0,0)); // painel da esquerda CENTRO - ESQUERDA
		JPanel painelCcD = new JPanel(new GridLayout(3,3,0,0));//painel da esquerda CENTRO - DIREITA	
		
		JPanel painel2 = new JPanel(new BorderLayout());//painéis para criar margem do lado e em baixo
		JPanel painel3 = new JPanel();
		JPanel painel4 = new JPanel();
		
		printer = new JLabel("         Printer: My Printer");
		printQ = new JLabel("Print Quality:");
		image = new JCheckBox("Image");
		text = new JCheckBox("Text");
		Code = new JCheckBox("code");
		printFile = new JCheckBox("Print to file");
		selection = new JRadioButton("Selection");
		all = new JRadioButton("All");
		aplett = new JRadioButton("Aplett");
		ok = new JButton("OK");
		cancel = new JButton("Cancel");
		setup = new JButton("Setup...");
		help = new JButton("Help");
		aux1 = new JLabel("");
		aux2 = new JLabel("");
		aux3 = new JLabel("");
		aux4 = new JLabel("");
		aux5 = new JLabel("");
		aux6 = new JLabel("");
		

		String[] op = new String[] { 
				"High" 
				};
		high = new JComboBox(op);
		
		painel.add(painel2,BorderLayout.CENTER);
		painel.add(painel3,BorderLayout.EAST);
		painel.add(painel4,BorderLayout.SOUTH);
		
		painel2.add(painelD,BorderLayout.EAST);
		painelD.add(ok);
		painelD.add(cancel);
		painelD.add(setup);
		painelD.add(help);
		
		painel2.add(painelC,BorderLayout.CENTER);
		
		painelC.add(painelCn,BorderLayout.NORTH);
		painelCn.setLayout(new FlowLayout(FlowLayout.LEFT));
		painelCn.add(printer);
		
		painelC.add(painelCc,BorderLayout.CENTER);
		painelCc.add(painelCcE,BorderLayout.WEST);
		painelCcE.add(aux1);
		painelCcE.add(image);
		painelCcE.add(aux3);
		painelCcE.add(Code);
		painelCcE.add(aux2);
		painelCcE.add(text);
		painelCc.add(painelCcD,BorderLayout.EAST);
		painelCcD.add(selection);
		painelCcD.add(aux4);
		painelCcD.add(all);
		painelCcD.add(aux6);
		painelCcD.add(aplett);
		painelCcD.add(aux5);
		
		
		painelC.add(painelCs,BorderLayout.SOUTH);
		painelCs.add(printQ);
		painelCs.add(high);
		painelCs.add(printFile);
		
		add(painel);
		setSize(400, 170);
		
	}

}


