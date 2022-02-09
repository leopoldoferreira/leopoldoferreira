
public abstract class Empregado implements Pagavel, Comparable {

	private String nome;
	private String cpf;
	
	public Empregado(String nome, String cpf) {
		this.nome = nome;
		this.cpf = cpf;
	}

	public abstract double getProventos();
	
	public double getQuantiaPagamento() {
		return getProventos();
	}
	
	public String getNome() {
		return nome;
	}



	public void setNome(String nome) {
		this.nome = nome;
	}



	public String getCpf() {
		return cpf;
	}



	public void setCpf(String cpf) {
		this.cpf = cpf;
	}



	@Override
	public String toString() {
		return "Empregado [nome=" + nome + ", getQuantiaPagamento()="
				+ getQuantiaPagamento() + "]";
	}
	
	
	public int compareTo(Object o) {
		return 0;
	}
	
}
