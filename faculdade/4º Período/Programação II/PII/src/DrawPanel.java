import java.awt.Graphics;
import javax.swing.JPanel;

public class DrawPanel extends JPanel {

	public void paintComponent(Graphics g) {
		super.paintComponent(g);

		int x = getWidth() / 15;
		int y = getHeight() / 15;

		for (int i = 0; i <= 15; i++) {

			int px = i * x;
			int py = (i - 1) * y;
			g.drawLine(0, py, px, getHeight());

		}
		for (int i = 0; i <= 15; i++) {

			int px = i * x;
			int py = (i - 1) * y;
			g.drawLine(0, py, px, getHeight());

		}

	}
}
