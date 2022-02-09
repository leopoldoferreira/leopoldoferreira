package desenhador;

import java.awt.Graphics;

public class Triangulo extends Forma {

	public Triangulo(int xi, int yi, int xf, int yf) {
		super(xi, yi, xf, yf);
		// TODO Auto-generated constructor stub
	}

	@Override
	public void desenhar(Graphics g) {
		g.drawLine(getXi() + getLargura()/2, getYi(), getXi(), getYf());
		g.drawLine(getXi() + getLargura()/2, getYi(), getXf(), getYf());
		g.drawLine(getXi(), getYf(), getXf(), getYf());
	}

	
	
}
