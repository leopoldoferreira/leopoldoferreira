import javax.swing.JFrame;


public class DrawPanelTest {

	public static void main(String[] args) {
		
		JFrame janela = new JFrame("Exercício 4.1");
		
		DrawPanel painel = new DrawPanel();
		
		janela.add(painel);
		janela.setSize(250, 250);
		
		janela.setVisible(true);
		
	}
	
}
