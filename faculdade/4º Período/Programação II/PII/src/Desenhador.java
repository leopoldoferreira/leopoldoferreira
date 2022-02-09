import java.awt.Graphics;

import javax.swing.JPanel;

public class Desenhador extends JPanel {

	
	private Forma[] forma;
	
	public Desenhador(){
		
		forma = new Forma[9];
		forma[0] = new Linha(0, 0, 100, 100);
		forma[1] = new Linha(80, 80, 40, 60);
		forma[2] = new Linha(40, 40, 30, 60);
		forma[3] = new Retangulo(40, 40, 125, 125);
		forma[4] = new Retangulo(25, 25, 45, 90);
		forma[5] = new Oval(80, 80, 200, 200);
		forma[6] = new Oval(5, 5, 35, 35);
		forma[7] = new Triangulo(100,100,210,210);
		forma[8] = new Losango(100,100,200,200);
	}
	public void paintComponent(Graphics g) {
		super.paintComponent(g);
		for (int i = 0; i < forma.length; i++) {
			forma[i].desenhar(g);
		}
		
	}

}
