package ex3;

import javax.swing.JOptionPane;

public class ComplexoManipuladora {
	public double a,b;
	public void inicializaN�mero(){
		a = Double.parseDouble(JOptionPane.showInputDialog(null,"Digite o n�mero Real\n"));
		b = Double.parseDouble(JOptionPane.showInputDialog(null,"Digite o n�mero Imagin�rio"));
	}
	
	public void exibiN�mero(){
		JOptionPane.showMessageDialog(null,"z = "+(a) +"+" +(b)+"*i");
		if(b==0){
		JOptionPane.showMessageDialog(null,"Numero Real");
		}
		if(a!=0 && b!=0){
		JOptionPane.showMessageDialog(null,"Numero Imagin�rio");
		}
		if(a==0){
		JOptionPane.showMessageDialog(null,"Numero Imagin�rio Puro");
		}
		}
}
