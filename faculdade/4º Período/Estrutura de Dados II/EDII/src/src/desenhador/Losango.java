package desenhador;

import java.awt.Graphics;


public class Losango extends Forma{

	public Losango(int xi, int yi, int xf, int yf) {
		super(xi, yi, xf, yf);
		// TODO Auto-generated constructor stub
	}

	public void desenhar(Graphics g) {
		g.drawLine((xf-xi)/2+xi,yi,xi,(yf-yi)/2+yi );
		g.drawLine((xf-xi)/2+xi,yi,xf,(yf-yi)/2+yi);
		g.drawLine(xi,(yf-yi)/2+yi,(xf-xi)/2+xi,yf);
		g.drawLine((xf-xi)/2+xi, yf, xf,(yf-yi)/2+yi );
	}
}
