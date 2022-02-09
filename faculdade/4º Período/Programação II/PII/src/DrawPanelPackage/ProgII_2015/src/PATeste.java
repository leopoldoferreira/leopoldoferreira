
public class PATeste {

	public static void main(String[] args) {
		
		ProgressaoAritmetica pares = new ProgressaoAritmetica(2, 0);
		ProgressaoAritmetica impares = new ProgressaoAritmetica(2, 1);
		
		System.out.println("Progressão de Pares:");
		for (int i = 1; i <= 10; i++)
			System.out.printf("%d ", pares.getEnesimo(i));
		System.out.println("\n");
		
		System.out.println("Progressão de Ímpares:");
		for (int i = 1; i <= 10; i++)
			System.out.printf("%d ", impares.getEnesimo(i));
		System.out.println("\n");
		
		System.out.printf("Soma dos 10 primeiros pares: %d\n",
				pares.getSoma(10));
		System.out.printf("Soma dos 10 primeiros ímpares: %d\n",
				impares.getSoma(10));
	}
	
}
