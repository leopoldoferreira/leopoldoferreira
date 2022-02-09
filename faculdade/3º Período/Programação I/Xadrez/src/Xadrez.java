import javax.swing.JOptionPane; 
public class Xadrez {
	public static void main(String[] args){ 
		double graos = Math.pow(2,64);
		double segundos = graos/5;
		double minutos = segundos/60;
		double horas = minutos/60;
		double dias = horas/24;
		double anos = dias/365;
		double seculos = anos/100;
		JOptionPane.showMessageDialog(null,"Total de Grãos: "+graos+"\nTempo em Segundos: "+segundos+"\nTempo em Minutos: "+minutos+"\nTempo em Horas: "+horas+"\nTempo em Dias: "+dias+"\nTempo em Anos: "+anos+"\nTempo em Séculos: "+seculos);
		
		
	}
}
