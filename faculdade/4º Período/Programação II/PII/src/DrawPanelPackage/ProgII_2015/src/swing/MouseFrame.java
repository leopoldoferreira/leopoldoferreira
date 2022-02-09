package swing;

import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.FlowLayout;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;
import java.awt.event.MouseMotionListener;

import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;

public class MouseFrame extends JFrame implements MouseListener, MouseMotionListener {
	
	private JPanel painel;
	private JPanel central;
	private JPanel pnlStatus;
	private JLabel lblStatus;
	private JLabel lblClique;
	private JLabel lblMouse;
	
	public MouseFrame() {
		
		super("Exemplo de MouseEvent");
		
		painel = new JPanel();
		painel.setLayout(new BorderLayout());
		
		central = new JPanel();
		painel.add(central, BorderLayout.CENTER);
		
		pnlStatus = new JPanel();
		pnlStatus.setLayout(new FlowLayout(FlowLayout.LEFT));
		
		lblStatus = new JLabel();
		lblClique = new JLabel();
		lblMouse = new JLabel();
		pnlStatus.add(lblStatus);
		pnlStatus.add(lblClique);
		pnlStatus.add(lblMouse);
		
		painel.add(pnlStatus, BorderLayout.SOUTH);
		add(painel);
		setSize(300, 300);
		
		central.addMouseListener(this);
		central.addMouseMotionListener(this);
		
		pnlStatus.addMouseListener(new MeuMouseAdapter());
		
	}

	class MeuMouseAdapter extends MouseAdapter {
		@Override
		public void mouseClicked(MouseEvent e) {
			pnlStatus.setBackground(Color.CYAN);
		}
		
	}
	
	@Override
	public void mouseClicked(MouseEvent e) {
		lblClique.setText("Clicou: (" + e.getX() + ", " + e.getY() + ")");
	}

	@Override
	public void mouseEntered(MouseEvent arg0) {
		central.setBackground(Color.GREEN);
	}

	@Override
	public void mouseExited(MouseEvent arg0) {
		central.setBackground(Color.WHITE);
	}

	@Override
	public void mousePressed(MouseEvent arg0) {
		lblMouse.setText("Mouse pressionado");
	}

	@Override
	public void mouseReleased(MouseEvent arg0) {
		lblMouse.setText("Mouse liberado");
	}

	@Override
	public void mouseDragged(MouseEvent arg0) {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void mouseMoved(MouseEvent e) {
		lblStatus.setText("Coord: (" + e.getX() + ", " + e.getY() + ")");
	}

}
