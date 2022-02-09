package swing;

import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;

import javax.swing.JFrame;
import javax.swing.JPanel;

public class ColorFrame extends JFrame {

	private JPanel painel;
	
	public ColorFrame() {
		super("Color Frame");
	
		painel = new JPanel();
		painel.addMouseListener(new MeuListener());
		add(painel);
		setSize(300, 300);
	}
	
	class MeuListener extends MouseAdapter {
		
		public void mouseClicked(MouseEvent e) {
			
		}
		
	}
	
}
