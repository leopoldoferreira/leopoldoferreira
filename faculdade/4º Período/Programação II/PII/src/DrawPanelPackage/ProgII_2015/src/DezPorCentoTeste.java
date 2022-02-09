
public class DezPorCentoTeste {

	public static void main(String[] args) {
		
		
		Empregado empregados[] = new Empregado[4];
		
		empregados[0] = new Assalariado("Mariana", "111", 1200);
		empregados[1] = new Horista("Geovane", "222", 50, 40);
		empregados[2] = new Comissionado("Gustavo", "333", 2000, 0.2);
		empregados[3] = new BaseComissionado("Lorena", "444", 2500, 0.25, 1000);
		
		System.out.printf("%-10s %s", "Nome", "Proventos\n");
		
		for (int i = 0; i < empregados.length; i++) {
			
			if (empregados[i] instanceof BaseComissionado) {
				
				// dou 10% de aumento em cima do salário-base
				BaseComissionado bc = (BaseComissionado) empregados[i]; // downcasting
				bc.setSalarioBase(bc.getSalarioBase() * 1.1);
				
			}

			double proventos = empregados[i].getProventos();
			
			System.out.printf("%-10s %.2f\n",
					empregados[i].getNome(), proventos);
			
		}
		
	}

}
