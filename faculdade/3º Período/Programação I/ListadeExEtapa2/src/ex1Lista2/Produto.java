package ex1Lista2;

import javax.swing.JOptionPane;
public class Produto {

	public static double[] pre�ovenda = new double[10];
	public static double[] custo = new double[10];
	public static double[] venda = new double[10];
	private static double fimdodia=0;
	int i = 0;
	public void criaProduto(){
	if(i==10){
		JOptionPane.showMessageDialog(null,"Lista de cadastro de produtos cheia");
	}else{
	for(i=0;i<10;i++){
	custo[i]= Double.parseDouble(JOptionPane.showInputDialog(null,"Digite o pre�o de custo produto["+(i+1)+"]: "));
	pre�ovenda[i]= Double.parseDouble(JOptionPane.showInputDialog(null,"Digite o pre�o de venda produto["+(i+1)+"]: "));
		}
	}
	}

	public void exibeProdutos(){
		for (int j=0; j<10; j++){  
			JOptionPane.showMessageDialog(null,"Produto[" + (j+1) + "]" + " de custo: " + (custo[j]) +"\n"
					+"Produto["+(j+1)+"]"+" de custo: "+(pre�ovenda[j]));
		}
	}
	
	public void realizaVenda(){
		double caixa;
		i = Integer.parseInt(JOptionPane.showInputDialog("Qual produto deseja comprar: "));
		if(i>=1 || i<=10){
		caixa = pre�ovenda[i-1] - custo[i-1];
		if(caixa == 0){
			JOptionPane.showMessageDialog(null,"N�o obteve lucro ou prejuizo");
		}else if(caixa<0){
			JOptionPane.showMessageDialog(null,"Prejuizo de "+(custo[i-1]-pre�ovenda[i-1])+ " R$");
			fimdodia = fimdodia - caixa;
		}else if(caixa>0){
			JOptionPane.showMessageDialog(null,"Lucro de "+(pre�ovenda[i-1]-custo[i-1])+ " R$");
			fimdodia = fimdodia + caixa;
		}
		}else{
			JOptionPane.showMessageDialog(null,"Produto Inexistente");
		}
	}
	
	public void imprimeCaixafimdodia(){
		JOptionPane.showMessageDialog(null,"Caixa atual: "+fimdodia +"R$");
		
	}

	
	
}
