package swing;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.JTextField;

public class NomeFrame extends JFrame {
	
	private JLabel lblNome;
	private JTextField tfNome;
	private JButton btnNome;
	
	public NomeFrame() {
		
		/* configuro o titulo da janela */
		super("Teste do Swing 2");
		
		tfNome = new JTextField(10);
		btnNome = new JButton("OK");
		lblNome = new JLabel("Nome:");
		
		JPanel painel = new JPanel();
		painel.add(lblNome);
		painel.add(tfNome);
		painel.add(btnNome);
		
		MostrarNome mn = new MostrarNome();
		btnNome.addActionListener(mn);
		
		btnNome.setDefaultCapable(true);
		getRootPane().setDefaultButton(btnNome);
		
		add(painel);
		setSize(200, 200);
		setVisible(true);
		
		
	}
	
	class MostrarNome implements ActionListener {

		@Override
		public void actionPerformed(ActionEvent arg0) {
			String mensagem = tfNome.getText();
			JOptionPane.showMessageDialog(null, "Olá, " + mensagem);
		}
		
	}

}
