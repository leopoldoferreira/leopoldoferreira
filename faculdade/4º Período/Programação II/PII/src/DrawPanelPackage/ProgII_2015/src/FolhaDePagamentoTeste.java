
public class FolhaDePagamentoTeste {

	public static void main(String[] args) {
		
		Comissionado pedro = new Comissionado("Pedro", "11", 1000, 0.20);
		
		System.out.printf("%s. Venda bruta: %.2f, Comissao: %.2f, Salario: %.2f\n",
				pedro.getNome(), pedro.getVendaBruta(), pedro.getComissao(),
				pedro.getProventos());
		
		BaseComissionado paulo = new BaseComissionado("Paulo", "1", 1000, 0.20, 788);
		
		System.out.printf("%s. Venda bruta: %.2f, Comissao: %.2f, Salario: %.2f\n",
				paulo.getNome(), paulo.getVendaBruta(), paulo.getComissao(),
				paulo.getProventos());
		
		System.out.printf("\nComissionado.toString(): %s"+
				"\nBaseComissionado.toString(): %s\n",
				pedro, paulo);
		
	}
}
