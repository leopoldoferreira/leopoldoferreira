
public class ProgressaoAritmetica {

	private final int razao;
	private final int primeiro;
	
	public ProgressaoAritmetica(int razao, int primeiro) {
		super();
		this.razao = razao;
		this.primeiro = primeiro;
	}
	
	public int getEnesimo(int n) {
		
		return primeiro + (n-1) * razao;
		
	}
	
	public int getSoma(int n) {
		
		return (primeiro + getEnesimo(n)) * n / 2;
		
	}
	
}
