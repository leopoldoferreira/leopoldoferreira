package desenhador;

import java.awt.Graphics;

import javax.swing.JPanel;

public class Desenhador extends JPanel {

	private Forma[] formas;
	
	public Desenhador() {
		
		formas = new Forma[1];
		
		int i = 0;
//		formas[i++] = new Linha(0, 0, 100, 100);
//		formas[i++] = new Linha(10, 10, 200, 200);
//		formas[i++] = new Linha(40, 40, 30, 60);
//		
//		formas[i++] = new Retangulo(40, 40, 125, 125);
//		formas[i++] = new Retangulo(25, 25, 45, 90);
//		
//		formas[i++] = new Oval(80, 80, 200, 200);
//		formas[i++] = new Oval(5, 5, 35, 35);
//		
//		formas[i++] = new Triangulo(10, 15, 20, 20);
//		formas[i++] = new Triangulo(100, 100, 210, 210);
		
		//formas[i++] = new Brasil(90, 90, 250, 210);
		
	}
	
	public void paintComponent(Graphics g) {
		
		super.paintComponent(g);
		
		formas[0] = new Brasil(30, 30, getWidth() - 30, getHeight() - 30);
		
		for (int i = 0; i < formas.length; i++) {
			formas[i].desenhar(g);
		}
		
	}
	
}
