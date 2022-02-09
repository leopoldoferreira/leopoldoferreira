
public class PagavelTeste {

	public static void main(String[] args) {
		
		Pagavel pagaveis[] = new Pagavel[4];
		
		pagaveis[0] = new Assalariado("ivan", "111", 1200);
		pagaveis[1] = new Fatura("123a", "parafuso", 500, 0.05);
		pagaveis[2] = new Fatura("456b", "cerveja", 120, 1.7);
		pagaveis[3] = new Comissionado("carlos", "222", 2000, 0.25);
		
		// FOR NORMAL
//		for (int i = 0; i < pagaveis.length; i++) {
//			Pagavel obj = pagaveis[i];
//			// trabalha com obj
//		}
		
		for (Pagavel pagavel : pagaveis) {
			System.out.println(pagavel);
		}
	}

}
