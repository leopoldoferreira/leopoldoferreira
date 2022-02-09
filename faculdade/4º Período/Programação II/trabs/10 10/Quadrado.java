package ex1010;

public class Quadrado extends FormaBidimensional{

	public Quadrado(double base, double altura) {
		super(base, altura);
		// TODO Auto-generated constructor stub
	}

	@Override
	public void obterArea() {
		System.out.println("Quadrado - Forma Bidimensional "+base*altura);
		
	}

	@Override
	public void obterVolume() {
		// TODO Auto-generated method stub
		
	}

}
