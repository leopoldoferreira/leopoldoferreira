package desenhador;

import java.awt.Graphics;

public class Brasil extends Forma {

	private Retangulo retangulo;
	private Losango losango;
	private Oval circulo;
	
	public Brasil(int xi, int yi, int xf, int yf) {
		super(xi, yi, xf, yf);
		retangulo = new Retangulo(xi, yi, xf, yf);
		
		int deslocamentoX = (int) (0.1 * getLargura());
		int deslocamentoY = (int) (0.1 * getAltura());
		
		int xil = xi + deslocamentoX;
		int yil = yi + deslocamentoY;
		int xfl = xf - deslocamentoX;
		int yfl = yf - deslocamentoY;
		
		int deslocX = (int) (getLargura() *0.10);
		int deslocY = (int) (getAltura() *0.10);
		
		losango = new Losango(xi+deslocX, 
				yi+deslocY, 
				xf-deslocX,
				yf-deslocY);
		
		deslocX = (int) (getLargura() *0.30);
		deslocY = (int) (getAltura() *0.30);
		
		circulo = new Oval(xi+deslocX, yi+deslocY, 
				xf-deslocX, yf-deslocY);
	}

	@Override
	public void desenhar(Graphics g) {
		retangulo.desenhar(g);
		losango.desenhar(g);
		circulo.desenhar(g);
	}

}
