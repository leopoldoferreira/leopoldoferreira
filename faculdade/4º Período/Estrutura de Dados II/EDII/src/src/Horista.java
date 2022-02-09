
public class Horista extends Empregado {

	private double salarioHora;
	private double horas;
	
	public Horista(String nome, String cpf, double salarioHora, double horas) {
		super(nome, cpf);
		this.salarioHora = salarioHora;
		this.horas = horas;
	}

	@Override
	public double getProventos() {
		return salarioHora * horas;
	}
	

	public double getSalarioHora() {
		return salarioHora;
	}



	public void setSalarioHora(double salarioHora) {
		this.salarioHora = salarioHora;
	}



	public double getHoras() {
		return horas;
	}



	public void setHoras(double horas) {
		this.horas = horas;
	}




}
