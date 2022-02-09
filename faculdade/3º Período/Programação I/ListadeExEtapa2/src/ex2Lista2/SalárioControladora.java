package ex2Lista2;

import javax.swing.JOptionPane;

public class SalárioControladora {
	
	public static void main(String[] args){
		Double salario;
		Salário reajuste = new Salário();
		salario = Double.parseDouble(JOptionPane.showInputDialog(null,"Digite o salário bruto: "));
		int op;
		do{
			op = Integer.parseInt(JOptionPane.showInputDialog(null,"1.Alterar Salário + 30%\n"
					+ "2.Alterar Salário + 20%\n"
					+ "3.Alterar Salário - 10%\n"
					+ "4.Sair\n"));
			switch(op){
			case 1:
				JOptionPane.showMessageDialog(null,"Salario atual: "+(salario));
				salario = reajuste.alteraSalário30(salario);
				JOptionPane.showMessageDialog(null,"Salario reajustado: "+(salario));
	break;
			case 2:
				JOptionPane.showMessageDialog(null,"Salario atual: "+(salario));
				salario = reajuste.alteraSalário20(salario);
				JOptionPane.showMessageDialog(null,"Salario reajustado: "+(salario));
	break;
			case 3:
				JOptionPane.showMessageDialog(null,"Salario atual: "+(salario));
				salario = reajuste.alteraSalário10(salario);
				JOptionPane.showMessageDialog(null,"Salario reajustado: "+(salario));
	break;
			}
		}while(op!=4);
	}

}
