import java.awt.Graphics;

import javax.swing.JPanel;


public class DrawPanel extends JPanel {
	
	public void paintComponent(Graphics g) {
		
		int x = getWidth() / 15;
		int y = getHeight() / 15;
		
		for (int i = 0; i < 15; i++) {
			
			// canto superior esquerdo
			int px = getWidth() - i * x;
			int py = i * y;
			
			g.drawLine(0, 0, px, py);

			// canto superior direito
			px = i * x;
			py = i * y;
			
			g.drawLine(getWidth(), 0, px, py);
			
			// canto inferior esquerdo
			px = i * x;
			py = i * y;
			
			g.drawLine(0, getHeight(), px, py);
			
			// canto inferior direito
			px = getWidth() - i * x;
			py = i * y;
			
			g.drawLine(getWidth(), getHeight(), px, py);
		}
	}

}
