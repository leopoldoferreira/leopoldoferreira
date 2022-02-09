import java.awt.Graphics;

public class Oval extends Forma{
	
	

	public Oval(int xi, int yi, int xf, int yf) {
		super(xi, yi, xf, yf);
		// TODO Auto-generated constructor stub
	}

	public void desenhar(Graphics g) {
		g.drawOval(xi, yi, xf-xi, yf-yi);
	}

}
