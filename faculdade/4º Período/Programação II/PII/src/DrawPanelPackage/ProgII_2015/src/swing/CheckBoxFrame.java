package swing;

import java.awt.Font;
import java.awt.event.ItemEvent;
import java.awt.event.ItemListener;

import javax.swing.JCheckBox;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JTextField;

public class CheckBoxFrame extends JFrame implements ItemListener {

	private JTextField campoTexto;
	private JCheckBox jcbNegrito;
	private JCheckBox jcbItalico;
	
	public CheckBoxFrame() {
		
		//super("Exemplo de JCheckBox");
		setTitle("Exemplo de JCheckBox");
		
		campoTexto = new JTextField("Texto de teste", 15);
		jcbNegrito = new JCheckBox("Negrito");
		jcbItalico = new JCheckBox("Itálico");
		
		// ligar os jcheckboxes no itemlistener
		jcbNegrito.addItemListener(this);
		jcbItalico.addItemListener(this);
		
		JPanel painel = new JPanel();
		painel.add(campoTexto);
		painel.add(jcbNegrito);
		painel.add(jcbItalico);
		
		add(painel);
		setSize(200, 200);
		
	}

	@Override
	public void itemStateChanged(ItemEvent e) {
		// se o botao negrito for pressionado, deixar a fonte em negrito
		// se o botao italico for pressionaod, deixar a fonte em italico
		// se ambos estiverem pressionados, deixar a fonte em negrito e italico;
		
		int estado = 0;
		
		if (jcbNegrito.isSelected()) {
			estado += Font.BOLD;
		}
		
		if (jcbItalico.isSelected()) {
			estado += Font.ITALIC;
		}
		
		Font fonte = new Font("Comic Sans MS", estado, 12);
		campoTexto.setFont(fonte);
	}

	
}
