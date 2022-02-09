package ex1010;

public class Cubo extends Forma{

	public Cubo(double base) {
		super(base, base);
		// TODO Auto-generated constructor stub
	}

	@Override
	public void obterArea() {
		System.out.println("Cubo - Tridimensional - Area: "+6*(base*base));
		
	}
	public void obterVolume(){
		System.out.println("Volume: "+(base*base*base));
	}
	//6*a^2 = area
	//volume = a*a*a
	
	

}
