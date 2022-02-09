package ex1;
import javax.swing.JOptionPane;
public class PolígonoNome {
	
	public void Nome(int lados){
		String Nome = null;
		if(lados<3 || lados>10){
			Nome = "Número inválido, escolha entre 3 e 10";
		}
		if(lados == 3){
			Nome = "Triangulo";
		}
		if(lados == 4){
			Nome = "Quadrilátero";
		}
		if(lados == 5){
			Nome = "Pentágono";
		}
		if(lados == 6){
			Nome = "Hexágono";
		}
		if(lados == 7){
			Nome = "Heptágono";
		}
		if(lados == 8){
			Nome = "Octógono";
		}
		if(lados == 9){
			Nome = "Eneágono";
		}
		if(lados == 10){
			Nome = "Decágono";
		}
		JOptionPane.showMessageDialog(null," "+Nome);
	}
}
