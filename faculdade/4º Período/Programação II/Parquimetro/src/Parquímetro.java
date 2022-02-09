import java.util.*;
public class Parquímetro {
	static double dinheiro;
	public static void recebeDinheiro(){
		
	}
	public int chamaAzul(int minutos){
		minutos += 15;
		return minutos;
	}

	//public float chamaVerde(float troco){
		
	//}
	public void retornaDinheiro(){
	
		
	}
	//public float retornaTotal(float total){
	
	public static void main (String[] args){
		Scanner input = new Scanner(System.in);
		System.out.printf("--MENU--\n 1.Inserir Dinheiro \n2.Botao Azul \n3.Botao Verde");
		switch(op){
		case 1:
			System.out.printf("Insira o dinheiro: ");
			dinheiro = input.nextDouble();
			recebeDinheiro();
			chamaAzul();
			break;
		case 2:
			chamaVerde();
			break;
			
		default:
			
			break;
		}
	}

}
