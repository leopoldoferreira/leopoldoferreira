package Ex10_09;

public class Funcionario extends Date{
	private String nome;
	private double salario;
	

	public Funcionario(String nome, double salario, int dia, int mes, int ano) {
		super(dia, mes, ano);
		this.nome = nome;
		this.salario = salario;
	}
	
	public double getAniverssario(){
		return 100;
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public double getSalario() {
		return salario;
	}

	public void setSalario(double salario) {
		this.salario = salario;
	}


	@Override
	public String toString() {
		return "Funcionario Nome: " + nome;
	}
	
	
	
}
