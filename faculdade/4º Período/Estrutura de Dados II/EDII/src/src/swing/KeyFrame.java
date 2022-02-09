package swing;

import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;

import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;

public class KeyFrame extends JFrame implements KeyListener {

	private JLabel lblTecla;
	private JLabel lblAcao;
	private JLabel lblModificadores;
	private JPanel painel;
	
	public KeyFrame() {
		super("Teste de KeyListener");
		
		lblTecla = new JLabel("Pressione uma tecla do teclado...");
		lblAcao = new JLabel();
		lblModificadores = new JLabel();
		painel = new JPanel();
		painel.add(lblTecla);
		painel.add(lblAcao);
		painel.add(lblModificadores);
		add(painel);
		
		addKeyListener(this);
	}

	@Override
	public void keyPressed(KeyEvent e) {
		// tecla pressionada
		// mostrar se é tecla de ação ou não
		// mostrar se tem modificadores
		atualizarLabels(e,"pressionada");
	}

	@Override
	public void keyReleased(KeyEvent e) {
		// tecla solta
		// mostrar se é tecla de ação ou não
		// mostrar se tem modificadores
		atualizarLabels(e,"solta");
	}

	@Override
	public void keyTyped(KeyEvent e) {
		// tecla "teclada"
		// mostrar se é tecla de ação ou não
		// mostrar se tem modificadores
		atualizarLabels(e,"apertada");
	}

	private void atualizarLabels(KeyEvent e, String porcao) {
		String msg = "Tecla "+porcao+":";
		String tecla = e.getKeyText( e.getKeyCode() );
		lblTecla.setText(msg + tecla);
		
		msg = "Esta tecla" + (e.isActionKey() ? " ": "não ") + " é tecla de ação.";
		lblAcao.setText(msg);
		
		msg = "Modificadores: " + e.getKeyModifiersText(e.getModifiers());
		lblModificadores.setText(msg);
	}
	
}
