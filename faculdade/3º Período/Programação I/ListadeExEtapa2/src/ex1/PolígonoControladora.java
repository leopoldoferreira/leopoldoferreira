package ex1;
import javax.swing.JOptionPane;
public class Pol�gonoControladora {
	public static void main(String[] args) {
		int lados;
		Pol�gonoNome i = new Pol�gonoNome();
		int op;
		do{
			op = Integer.parseInt(JOptionPane.showInputDialog(null,"1.Iniciar Programa\n"
					+ "2.Sair"));
			switch(op){
			case 1:
				lados = Integer.parseInt(JOptionPane.showInputDialog(null,"1.Digite o n�meros de lado qual deseja saber o nome\n"));
				i.Nome(lados);
				break;
			}
		}while(op!=2);
		
		

	}
}

