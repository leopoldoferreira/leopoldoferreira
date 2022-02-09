package swing;

import java.awt.Graphics;
import java.awt.Point;
import java.awt.event.MouseEvent;
import java.awt.event.MouseMotionAdapter;

import javax.swing.JPanel;

public class MousePainel extends JPanel {

	private Point[] pontos = new Point[500];
	private int contador = 0;

	public MousePainel() {
		addMouseMotionListener(new MeuMouseListener());
	}
	
	class MeuMouseListener extends MouseMotionAdapter {
		
		public void mouseDragged(MouseEvent e) {
			// quando o usuário está arrastando o cursor
			// em cima do painel
			
			if (contador < pontos.length) {
				Point p = e.getPoint();
				pontos[contador] = p;
				contador++;
				repaint();
			} else
				contador = 0;
			
		}
		
	}
	
	protected void paintComponent(Graphics g) {
		super.paintComponent(g);
		
		for (int i = 0; i < pontos.length; i++) {
			if (pontos[i] != null)
				g.fillOval(pontos[i].x, pontos[i].y, 4, 4);
		}
	}
	
}
