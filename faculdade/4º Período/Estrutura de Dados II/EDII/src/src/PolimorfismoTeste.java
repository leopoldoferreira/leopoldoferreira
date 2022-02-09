
public class PolimorfismoTeste {

	
	public static void imprimirEmpregado(Comissionado c) {
		
		System.out.printf("%s, salário: %.2f\n", c.getNome(), c.getProventos());
		
	}
	
	public static void main(String[] args) {
		
		Comissionado julia;
		
		julia = new BaseComissionado("Julia", "111", 1000, 0.2, 900);
		
		imprimirEmpregado(julia);
		
	}

}
