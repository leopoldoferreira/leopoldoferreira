import java.awt.Graphics;


public class Triangulo extends Forma{

	public Triangulo(int xi, int yi, int xf, int yf) {
		super(xi, yi, xf, yf);
		// TODO Auto-generated constructor stub
	}

	@Override
	public void desenhar(Graphics g) {
		// TODO Auto-generated method stub
		g.drawLine(xi+(xf-xi)/2, yi, xi, yf);
		g.drawLine(xi+(xf-xi)/2, yi, xf, yf);
		g.drawLine(xi, yf, xf, yf);
		
	}
	
}
