
public class Assalariado extends Empregado {

	private double salarioSemanal;
	
	
	
	public Assalariado(String nome, String cpf, double salarioSemanal) {
		super(nome, cpf);
		this.salarioSemanal = salarioSemanal;
	}



	public double getSalarioSemanal() {
		return salarioSemanal;
	}



	public void setSalarioSemanal(double salarioSemanal) {
		this.salarioSemanal = salarioSemanal;
	}



	@Override
	public double getProventos() {
		return salarioSemanal;
	}

}
