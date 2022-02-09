package excecoes;

import javax.swing.JFrame;

public class PilhaTeste {

	public static void main(String[] args) {
		PilhaInterface janela = new PilhaInterface();
		janela.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		janela.setVisible(true);
	}

}
