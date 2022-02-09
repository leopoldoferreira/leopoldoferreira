package desenhador;

import javax.swing.JFrame;

public class DesenhadorTeste {

	public static void main(String[] args) {
		
		// criar a janela
		JFrame janela = new JFrame("Desenhando");
		
		// criar um Desenhador
		Desenhador d = new Desenhador();
		
		// adicionar desenhador na janela
		janela.add(d);
		
		// configuro o tamanho da janela
		janela.setSize(450, 450);
		
		// exibo a janela
		janela.setVisible(true);
	}
	
}
