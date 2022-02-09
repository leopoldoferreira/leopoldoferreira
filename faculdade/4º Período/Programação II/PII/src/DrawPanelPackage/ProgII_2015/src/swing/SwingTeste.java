package swing;

import java.awt.Color;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.Icon;
import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.JTextField;
import javax.swing.SwingConstants;

public class SwingTeste {

	public static void main(String[] args) {
		
		JFrame janela = new JFrame("Teste do Swing");
		
		JPanel painel = new JPanel();
		
		janela.add(painel);
		
		JLabel lblNome = new JLabel("Nome:");
		lblNome.setToolTipText("Campo Nome");
		painel.add(lblNome);
		
		JTextField tfNome = new JTextField(10);
		tfNome.setText("WIndows");
		tfNome.setHorizontalAlignment(SwingConstants.CENTER);
		tfNome.setToolTipText("Escreva seu nome");
		
		painel.add(tfNome);
		
		JButton botao = new JButton("OK");
		botao.setForeground(Color.RED);
		botao.setToolTipText("Clique para exibir um JOptionPane");
		
		MostrarNome mn = new MostrarNome();
		botao.addActionListener(mn);
		
		Icon icone = new ImageIcon( SwingTeste.class.getResource("Ok.png") );
		
		painel.add(botao);
		
		JLabel lblIcone = new JLabel();
		lblIcone.setIcon(icone);
		
		painel.add(lblIcone);
		
		janela.setSize(150, 150);
		janela.setVisible(true);
		
	}

	static class MostrarNome implements ActionListener {

		@Override
		public void actionPerformed(ActionEvent www) {
			JOptionPane.showMessageDialog(null, "Você clicou no botão!");
		}
		
	}
}






