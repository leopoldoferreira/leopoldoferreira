package swing;

import javax.swing.JFrame;

public class MousePainelTeste {

	public static void main(String[] args) {
		
		JFrame janela = new JFrame("Desenho com o mouse");
		MousePainel painel = new MousePainel();
		janela.add(painel);
		janela.setSize(300, 350);
		janela.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		janela.setVisible(true);
		
	}

}
