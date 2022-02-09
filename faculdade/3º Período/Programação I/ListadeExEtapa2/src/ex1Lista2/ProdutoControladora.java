package ex1Lista2;

import javax.swing.JOptionPane;

public class ProdutoControladora {
	static Produto insere = new Produto();
	static Produto exibe = new Produto();
	static Produto vende = new Produto();
	static Produto valorfinal = new Produto();
	public static void main(String[] args) {
		int op;
		do{
			op = Integer.parseInt(JOptionPane.showInputDialog(null,"1.Inserir Produto\n"
					+ "2.Exibe Produtos\n"
					+ "3.Vender Produto e Retornar situação da venda\n"
					+ "4.Imprime Caixa\n"
					+ "5.Sair"));
			switch(op){
			case 1:
				insere.criaProduto();
	break;
			case 2:
				exibe.exibeProdutos();
	break;
			case 3:
				vende.realizaVenda();
	break;
			case 4:
				valorfinal.imprimeCaixafimdodia();
	break;
			}
		}while(op!=5);
		
		
	}
	
	
}
