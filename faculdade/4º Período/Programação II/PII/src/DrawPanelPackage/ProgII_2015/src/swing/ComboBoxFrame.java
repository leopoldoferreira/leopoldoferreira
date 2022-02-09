package swing;

import java.awt.event.ItemEvent;
import java.awt.event.ItemListener;

import javax.swing.Icon;
import javax.swing.ImageIcon;
import javax.swing.JComboBox;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;

public class ComboBoxFrame extends JFrame {

	private JPanel painel;
	private JComboBox comboBox;
	private JLabel labelImagem;
	
	private Icon[] imagens = new Icon[]{
			null,
		new ImageIcon(getClass().getResource("ai.png")),
		new ImageIcon(getClass().getResource("taka.png")),
		new ImageIcon(getClass().getResource("yu.png"))
	};

	private String[] opcoes = new String[]{
			"-- Selecione --",
			"Amor",
			"Altura",
			"Hiragana"
	};
	
	public ComboBoxFrame() {
		
		super("Exemplo ComboBox");
		
		// criar os componentes da janela
		comboBox = new JComboBox(opcoes);
		comboBox.setMaximumRowCount(4);
		
		// criar uma classe anonima para tratamento de eventos
		comboBox.addItemListener(new ItemListener() {

			@Override
			public void itemStateChanged(ItemEvent e) {
				
				if (e.getStateChange() == ItemEvent.SELECTED) {
					
					int indice = comboBox.getSelectedIndex();
					labelImagem.setIcon(imagens[indice]);
				}
				
			}
			
		});
				
		labelImagem = new JLabel();
		
		painel = new JPanel();
		painel.add(comboBox);
		painel.add(labelImagem);
		
		add(painel);
		
		setSize(150, 150);
	}
	
}
