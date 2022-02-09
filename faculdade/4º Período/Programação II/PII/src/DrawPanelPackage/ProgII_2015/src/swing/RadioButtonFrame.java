package swing;

import java.awt.Font;
import java.awt.event.ItemEvent;
import java.awt.event.ItemListener;

import javax.swing.ButtonGroup;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JRadioButton;
import javax.swing.JTextField;

public class RadioButtonFrame extends JFrame {

	private JTextField campoTexto;
	private JRadioButton jrbNegrito;
	private JRadioButton jrbItalico;
	private JRadioButton jrbNormal;
	private JRadioButton jrbNegritoItalico;
	private ButtonGroup grupoRadios;
	
	public RadioButtonFrame() {
		
		super("Exemplo de RadioButton");
		
		campoTexto = new JTextField("Texto de teste", 15);
		jrbNegrito = new JRadioButton("Negrito");
		jrbItalico = new JRadioButton("Itálico");
		jrbNormal = new JRadioButton("Normal");
		jrbNegritoItalico = new JRadioButton("Negrito/Itálico");
		
		jrbNegrito.addItemListener(new RadioListener(
				new Font("Serif", Font.BOLD, 12)));
		
		jrbItalico.addItemListener(new RadioListener(
				new Font("Serif", Font.ITALIC, 12)));
		
		jrbNormal.addItemListener(new RadioListener(
				new Font("Serif", Font.PLAIN, 12)));

		jrbNegritoItalico.addItemListener(new RadioListener(
				new Font("Serif", Font.BOLD + Font.ITALIC, 12)));
		
		grupoRadios = new ButtonGroup();
		grupoRadios.add(jrbNegrito);
		grupoRadios.add(jrbItalico);
		grupoRadios.add(jrbNormal);
		grupoRadios.add(jrbNegritoItalico);

		JPanel painel = new JPanel();
		painel.add(campoTexto);
		painel.add(jrbNegrito);
		painel.add(jrbItalico);
		painel.add(jrbNormal);
		painel.add(jrbNegritoItalico);
		
		add(painel);
		setSize(250,250);
	}
	
	class RadioListener implements ItemListener {

		private Font fonte;
		
		public RadioListener(Font fonte) {
			this.fonte = fonte;
		}
		
		@Override
		public void itemStateChanged(ItemEvent e) {
			campoTexto.setFont(fonte);
		}
		
	}
	
}
