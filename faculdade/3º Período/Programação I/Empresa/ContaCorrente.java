package Empresa;

import javax.swing.JOptionPane;
public class ContaCorrente {
	private double saldo=0;
	private double chequeespecial=1000;
	
	public ContaCorrente(double saldo, double chequeespecial){
		super();
		this.saldo = saldo;
		this.chequeespecial = chequeespecial;
	}
	public void depositaDinheiro()
	{
		double dinheiro = Double.parseDouble(JOptionPane.showInputDialog(null,"Deposite o Dinheiro: "));	
	
		saldo = saldo+dinheiro;
	
	}
	
	public void efetuaSaque(){
	 double debito;
	if(saldo<=0){
		JOptionPane.showMessageDialog(null,"Você nao possui saldo.\n");
		JOptionPane.showMessageDialog(null,"Vai ser retirado do cheque especial.");
		}
		else{
			String sal = String.format("%.2f",saldo);
			JOptionPane.showMessageDialog(null,"Você possui o saldo de: "+(sal));
		}
	
	double saque = Double.parseDouble(JOptionPane.showInputDialog(null,"Digite a quantia a ser retirada."));
	
	if(saque>chequeespecial)
	{
		JOptionPane.showMessageDialog(null,"Seu cheque especial atingiu o limite deposite dinheiro.");
	}
	else
	{
	chequeespecial=chequeespecial-saque;
	saldo=saldo-saque;
	debito = (saque*0.5)/100;
	String saq = String.format("%.2f",saque);
	JOptionPane.showMessageDialog(null,"Voce sacou:"+(saq));
	String deb = String.format("%.2f",debito);
	JOptionPane.showMessageDialog(null,"Foi descontado 0.5 por cento do valor do saque:"+(deb));
	saldo = saldo-debito;
	}
	}
	
	
	public void obterSaldo()
	{
		if(saldo<chequeespecial)
		{
			JOptionPane.showMessageDialog(null,"Seu cheque especial atingiu o limite deposite dinheiro.");
		
		String sal = String.format("%.2f",saldo);
		JOptionPane.showMessageDialog(null,"Seu saldo eh:"+(sal));
		}
		else
		{
			String sal = String.format("%.2f",saldo);
			JOptionPane.showMessageDialog(null,"Seu saldo eh:"+(sal));
		}
		}
	}

