package ex3;

import javax.swing.JOptionPane;

public class ComplexoControladora {
	public static void main(String[] args) {
		ComplexoManipuladora i = new ComplexoManipuladora();
		
	
	int op;
	do{
		op = Integer.parseInt(JOptionPane.showInputDialog(null,"1.Inicia Programa\n"
				+ "2.Exibir\n"
				+ "3.Sair"));
		switch(op){
		case 1:
			i.inicializaNúmero();
			break;
		case 2:
			i.exibiNúmero();
			break;
		}
	}while(op!=3);
	}
}
