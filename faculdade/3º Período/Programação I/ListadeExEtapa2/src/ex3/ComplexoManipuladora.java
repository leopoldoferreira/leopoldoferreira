package ex3;

import javax.swing.JOptionPane;

public class ComplexoManipuladora {
	public double a,b;
	public void inicializaNúmero(){
		a = Double.parseDouble(JOptionPane.showInputDialog(null,"Digite o número Real\n"));
		b = Double.parseDouble(JOptionPane.showInputDialog(null,"Digite o número Imaginário"));
	}
	
	public void exibiNúmero(){
		JOptionPane.showMessageDialog(null,"z = "+(a) +"+" +(b)+"*i");
		if(b==0){
		JOptionPane.showMessageDialog(null,"Numero Real");
		}
		if(a!=0 && b!=0){
		JOptionPane.showMessageDialog(null,"Numero Imaginário");
		}
		if(a==0){
		JOptionPane.showMessageDialog(null,"Numero Imaginário Puro");
		}
		}
}
