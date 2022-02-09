import java.awt.Graphics;

public class Retangulo extends Forma{
		
	public Retangulo(int xi, int yi, int xf, int yf) {
		super(xi, yi, xf, yf);
		// TODO Auto-generated constructor stub
	}

	public void desenhar(Graphics g) {
		g.drawRect(xi, yi, xf-xi, yf-yi);
	}
}
