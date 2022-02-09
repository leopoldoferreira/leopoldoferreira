package ex1010;

public class Esfera extends FormaTridimensional{

	public Esfera(double base) {
		super(base, base);
		// TODO Auto-generated constructor stub
	}

	public void obterArea() {
		System.out.println("Esfera - Tridimensional - Area: "+4*3.14*(base*base));
		
	}
	public void obterVolume(){
		System.out.println("Volume: "+4*3.14*((base*base*base)/3));
	}

}
