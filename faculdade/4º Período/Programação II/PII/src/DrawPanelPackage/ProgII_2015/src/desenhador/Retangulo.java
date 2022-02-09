package desenhador;

import java.awt.Graphics;

public class Retangulo extends Forma {

	public Retangulo(int xi, int yi, int xf, int yf) {
		super(xi, yi, xf, yf);
	}

	public void desenhar(Graphics g) {
		g.drawRect(getXi(), getYi(), getLargura(), getAltura());
	}

}
