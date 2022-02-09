package Empresa;

import javax.swing.JOptionPane;

public class Banco {
	public static void main(String[] args) {
		Poupança poupanca = new Poupança (0);
		ContaCorrente contacorrente = new ContaCorrente (0,0);
		int op;
		do
		{
		op=Integer.parseInt(JOptionPane.showInputDialog(null,"--Menu Conta Corrente--\n1- Depositar Dinheiro.\n2- Sacar Dinheiro.\n3- Obter Saldo.\n\n--Menu Conta Poupança--\n4- Depositar Dinheiro.\n5- Sacar Dinheiro.\n6- Obter Saldo.\n7- Sair.\n"));
		
		switch(op){
		case 1:
			contacorrente.depositaDinheiro();
			break;
		case 2:
			contacorrente.efetuaSaque();
			break;
		case 3:
			contacorrente.obterSaldo();
			break;
			
		case 4:
			poupanca.depositaDinheiro();
			break;
		case 5:
			poupanca.efetuaSaque();
			break;
		case 6:
			poupanca.obterSaldo();
			break;
			}
		}
		while(op!=7);
}

}			
				
		
		
		
	

		


