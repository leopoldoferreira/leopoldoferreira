import java.awt.Graphics;

public class Linha extends Forma{

	public Linha(int xi, int yi, int xf, int yf) {
		super(xi, yi, xf, yf);
		// TODO Auto-generated constructor stub
	}
	
	public void desenhar(Graphics g){
		g.drawLine(xi, yi, xf, yf);
		
		
	}
	
}
