package ex2Lista2;

import javax.swing.JOptionPane;

public class Sal�rioControladora {
	
	public static void main(String[] args){
		Double salario;
		Sal�rio reajuste = new Sal�rio();
		salario = Double.parseDouble(JOptionPane.showInputDialog(null,"Digite o sal�rio bruto: "));
		int op;
		do{
			op = Integer.parseInt(JOptionPane.showInputDialog(null,"1.Alterar Sal�rio + 30%\n"
					+ "2.Alterar Sal�rio + 20%\n"
					+ "3.Alterar Sal�rio - 10%\n"
					+ "4.Sair\n"));
			switch(op){
			case 1:
				JOptionPane.showMessageDialog(null,"Salario atual: "+(salario));
				salario = reajuste.alteraSal�rio30(salario);
				JOptionPane.showMessageDialog(null,"Salario reajustado: "+(salario));
	break;
			case 2:
				JOptionPane.showMessageDialog(null,"Salario atual: "+(salario));
				salario = reajuste.alteraSal�rio20(salario);
				JOptionPane.showMessageDialog(null,"Salario reajustado: "+(salario));
	break;
			case 3:
				JOptionPane.showMessageDialog(null,"Salario atual: "+(salario));
				salario = reajuste.alteraSal�rio10(salario);
				JOptionPane.showMessageDialog(null,"Salario reajustado: "+(salario));
	break;
			}
		}while(op!=4);
	}

}
