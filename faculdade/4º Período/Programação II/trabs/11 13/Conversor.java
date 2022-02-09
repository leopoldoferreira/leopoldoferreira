package ex1113;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextField;
import javax.swing.SwingConstants;

public class Conversor extends JFrame {

	private JTextField tfCtoF;
	private JButton btnCtoF;
	private JLabel lblCtoF;
	private JLabel lblRes;
	
	private JTextField tfCtoK;
	private JButton btnCtoK;
	private JLabel lblCtoK;
	private JLabel lblRes2;
	

	public Conversor() {
		super("Conversor de Temperatura");
		
		lblCtoF = new JLabel("Celsius para Farenheit: ");
		tfCtoF = new JTextField(5);
		btnCtoF = new JButton("Converter");
		lblRes = new JLabel();
		

		lblCtoK = new JLabel("Celsius para Kelvin: ");
		tfCtoK = new JTextField(5);
		btnCtoK = new JButton("Converter");
		lblRes2 = new JLabel();
		
		JPanel painel = new JPanel();
		
		painel.add(lblCtoF);
		painel.add(tfCtoF);
		painel.add(btnCtoF);
		painel.add(lblRes);
		
		painel.add(lblCtoK);
		painel.add(tfCtoK);
		painel.add(btnCtoK);
		painel.add(lblRes2);
		
		CtoF cv = new CtoF();
		btnCtoF.addActionListener(cv);
		
		CtoK ck = new CtoK();
		btnCtoK.addActionListener(ck);
		
		lblCtoF.setHorizontalAlignment(SwingConstants.CENTER);
		add(painel);
		setSize(700, 100);
		setVisible(true);
	}

	class CtoF implements ActionListener {

		public void actionPerformed(ActionEvent arg1) {
			String celsiusString = tfCtoF.getText();
			int celsius = Integer.valueOf(celsiusString);
			int fahrenheit = (9 * celsius + 160) / 5;
			String farenheitString = String.valueOf(fahrenheit);
			lblRes.setText(farenheitString);
		}
		
	}
	class CtoK implements ActionListener {

		public void actionPerformed(ActionEvent arg1) {
			String celsiusString = tfCtoK.getText();
			int celsius = Integer.valueOf(celsiusString);
			double kelvin = celsius + 273.15;
			String kelvinString = String.valueOf(kelvin);
			lblRes2.setText(kelvinString);
		}
		
	}
	
	
}