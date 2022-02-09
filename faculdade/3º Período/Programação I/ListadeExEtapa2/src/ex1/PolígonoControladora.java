package ex1;
import javax.swing.JOptionPane;
public class PolígonoControladora {
	public static void main(String[] args) {
		int lados;
		PolígonoNome i = new PolígonoNome();
		int op;
		do{
			op = Integer.parseInt(JOptionPane.showInputDialog(null,"1.Iniciar Programa\n"
					+ "2.Sair"));
			switch(op){
			case 1:
				lados = Integer.parseInt(JOptionPane.showInputDialog(null,"1.Digite o números de lado qual deseja saber o nome\n"));
				i.Nome(lados);
				break;
			}
		}while(op!=2);
		
		

	}
}

