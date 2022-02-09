
public class Comissionado extends Empregado {

	private double vendaBruta;
	private double comissao;
	
	public Comissionado(String nome, String cpf, double vendaBruta, double comissao) {
		super(nome, cpf);
		this.vendaBruta = vendaBruta;
		this.comissao = comissao;
	}

	public double getProventos() {
		
		return vendaBruta * comissao;
		
	}
	
	public double getVendaBruta() {
		return vendaBruta;
	}

	public void setVendaBruta(double vendaBruta) {
		this.vendaBruta = vendaBruta;
	}

	public double getComissao() {
		return comissao;
	}

	public void setComissao(double comissao) {
		this.comissao = comissao;
	}

	
}
