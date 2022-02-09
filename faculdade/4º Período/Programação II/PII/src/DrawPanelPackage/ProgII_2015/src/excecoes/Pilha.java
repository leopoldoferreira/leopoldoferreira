package excecoes;

public class Pilha {

	private int[] elementos;
	private int topo = -1;
	
	public Pilha(int tamanho) {
		elementos = new int[tamanho];
	}
	
	public void push(int elemento) throws PilhaCheiaException {
		try {
			topo++;
			elementos[topo] = elemento;
		} catch (ArrayIndexOutOfBoundsException e) {
			topo--;
			throw new PilhaCheiaException();
		}
	}
	
	public int pop() throws PilhaVaziaException {
		try {
			int elemento = elementos[topo];
			topo--;
			return elemento;
		} catch (ArrayIndexOutOfBoundsException e) {
			throw new PilhaVaziaException();
		}
		
	}
	
}
