package TrabalhoDb;
//FADRIQUE BRITO
import java.awt.BorderLayout;
import java.awt.FlowLayout;
import java.awt.GridLayout;

import javax.swing.JButton;
import javax.swing.JCheckBox;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextField;

public class Exe11_08 extends JFrame{

	private JCheckBox snap;
	private JCheckBox showGrid;
	private JLabel jlbX;
	private JLabel jblY;
	private JTextField txt8x;
	private JTextField txt8y;
	private JButton ok;
	private JButton cancel;
	private JButton help;
	private JPanel painel;
	private JPanel painel1;
	private JPanel painel2;
	private JPanel painel3;
	
	
	public Exe11_08(){
		super("Align");
		
		
		painel = new JPanel();
		
		painel.setLayout(new FlowLayout());
		
		painel1 = new JPanel();
		painel2 = new JPanel();
		painel3 = new JPanel();
		
		snap = new JCheckBox("Snap to Grid");
		showGrid = new JCheckBox("Show Grid");
		jlbX = new JLabel("X:",0);
		jblY = new JLabel("Y:",0);
		txt8x = new JTextField("8",3);
		txt8y = new JTextField("8",3);
		ok = new JButton("OK");
		cancel = new JButton("Cancel");
		help = new JButton("Help");
		
		
		painel.add(painel1,FlowLayout.LEFT);
		painel1.setLayout(new GridLayout(2,1,0,2));
		painel1.add(snap);
		painel1.add(showGrid);
		
		painel.add(painel2,FlowLayout.CENTER);
		painel2.setLayout(new GridLayout(2,2,0,5));
		painel2.add(jlbX);
		painel2.add(txt8x);
		painel2.add(jblY);
		painel2.add(txt8y);
		
		painel.add(painel3,FlowLayout.RIGHT);
		painel3.setLayout(new GridLayout(3,1,0,5));
		painel3.add(ok);
		painel3.add(cancel);
		painel3.add(help);
		
		add(painel);
		setSize(300,150);		
		
	}
	
}
