package ex1;
import javax.swing.JOptionPane;
public class Pol�gonoNome {
	
	public void Nome(int lados){
		String Nome = null;
		if(lados<3 || lados>10){
			Nome = "N�mero inv�lido, escolha entre 3 e 10";
		}
		if(lados == 3){
			Nome = "Triangulo";
		}
		if(lados == 4){
			Nome = "Quadril�tero";
		}
		if(lados == 5){
			Nome = "Pent�gono";
		}
		if(lados == 6){
			Nome = "Hex�gono";
		}
		if(lados == 7){
			Nome = "Hept�gono";
		}
		if(lados == 8){
			Nome = "Oct�gono";
		}
		if(lados == 9){
			Nome = "Ene�gono";
		}
		if(lados == 10){
			Nome = "Dec�gono";
		}
		JOptionPane.showMessageDialog(null," "+Nome);
	}
}
