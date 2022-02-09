package Empresa;
import javax.swing.JOptionPane;
public class Poupança {
	private double saldo=0;
	
	public Poupança (double saldo){
		super();
		this.saldo = saldo;
	}
	public void depositaDinheiro()
	{
		double dinheiro = Double.parseDouble(JOptionPane.showInputDialog(null,"Deposite o Dinheiro: "));	
	
		saldo = saldo+dinheiro;
	
	}

	public void efetuaSaque(){
	if(saldo<=0){
		JOptionPane.showMessageDialog(null,"Você nao possui saldo.");
		}
		else{
			String sal = String.format("%.2f",saldo);
			JOptionPane.showMessageDialog(null,"Você possui o saldo de: "+(sal));
			double saque = Double.parseDouble(JOptionPane.showInputDialog(null,"Digite a quantia a ser retirada."));
			
			if(saque>saldo)
			{
				JOptionPane.showMessageDialog(null,"Nao eh possivel efetuar o saque, saldo insuficiente.");
			}
			else
			{
				saldo=saldo-saque;
				String saq = String.format("%.2f",saque);
				JOptionPane.showMessageDialog(null,"Voce sacou:"+(saq));
			}	
		}
	}
	
	
	public void obterSaldo()
	{
		String sal = String.format("%.2f",saldo);
		JOptionPane.showMessageDialog(null,"Seu saldo eh:"+(sal));
	}
}
