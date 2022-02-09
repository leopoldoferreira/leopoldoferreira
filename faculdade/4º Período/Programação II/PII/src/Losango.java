import java.awt.Graphics;


public class Losango extends Forma{

	public Losango(int xi, int yi, int xf, int yf) {
		super(xi, yi, xf, yf);
		// TODO Auto-generated constructor stub
	}

	@Override
	public void desenhar(Graphics g) {
		// TODO Auto-generated method stub
		g.drawLine(xi+(xf-xi)/2, yi, xi, yi+(xf-xi)/2);
		
		g.drawLine(xi+(xf-xi)/2, yi, xf, yi+(xf-xi)/2);
		
		g.drawLine(xi+(xf-xi)/2, yf, xf, yi+(xf-xi)/2);
		g.drawLine(xi+(xf-xi)/2, yf, xi, yi+(xf-xi)/2);
	}

}
