package ex1010;

public class Triangulo extends FormaBidimensional{
	
	
	public Triangulo(double base, double altura) {
		super(base, altura);
		// TODO Auto-generated constructor stub
	}

	public void obterArea(){
		System.out.println("Triângulo - Forma Bidimensional "+base*altura/2);
	}

	@Override
	public void obterVolume() {
		// TODO Auto-generated method stub
		
	}



}
