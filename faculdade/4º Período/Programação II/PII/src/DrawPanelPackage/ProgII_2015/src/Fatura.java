
public class Fatura implements Pagavel {

	private String numeroPeca;
	private String descricao;
	private int quantidade;
	private double precoPorItem;

	// alt shift s o
	public Fatura(String numeroPeca, String descricao, int quantidade,
			double precoPorItem) {
		this.numeroPeca = numeroPeca;
		this.descricao = descricao;
		this.quantidade = quantidade;
		this.precoPorItem = precoPorItem;
	}

	public String getNumeroPeca() {
		return numeroPeca;
	}

	public void setNumeroPeca(String numeroPeca) {
		this.numeroPeca = numeroPeca;
	}

	public String getDescricao() {
		return descricao;
	}

	public void setDescricao(String descricao) {
		this.descricao = descricao;
	}

	public int getQuantidade() {
		return quantidade;
	}

	public void setQuantidade(int quantidade) {
		this.quantidade = quantidade;
	}

	public double getPrecoPorItem() {
		return precoPorItem;
	}

	public void setPrecoPorItem(double precoPorItem) {
		this.precoPorItem = precoPorItem;
	}

	@Override
	public double getQuantiaPagamento() {
		
		return precoPorItem * quantidade;
	}

	@Override
	public String toString() {
		return "Fatura [descricao=" + descricao + ", getQuantiaPagamento()="
				+ getQuantiaPagamento() + "]";
	}
	
	// alt shift s r
	
	
	
}
