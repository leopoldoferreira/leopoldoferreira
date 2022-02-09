package desenhador;

import java.awt.Graphics;

public class Oval extends Forma {

	public Oval(int xi, int yi, int xf, int yf) {
		super(xi, yi, xf, yf);
	}

	public void desenhar(Graphics g) {
		g.drawOval(getXi(), getYi(), getLargura(), getAltura());
	}

}
