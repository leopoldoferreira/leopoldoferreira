
public class BaseComissionado extends Comissionado {

	private double salarioBase;
	
	public BaseComissionado(String nome, String cpf, double vendaBruta, double comissao,
			double salarioBase) {
		super(nome, cpf, vendaBruta, comissao);
		this.salarioBase = salarioBase;
	}

	
	
	public double getSalarioBase() {
		return salarioBase;
	}



	public void setSalarioBase(double salarioBase) {
		this.salarioBase = salarioBase;
	}



	public double getProventos() {
		
		return salarioBase + super.getProventos();
		
	}
	
}
