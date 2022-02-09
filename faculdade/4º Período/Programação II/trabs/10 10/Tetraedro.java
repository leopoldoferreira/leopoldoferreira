package ex1010;

public class Tetraedro extends FormaTridimensional{

	public Tetraedro(double base) {
		super(base, base);
		// TODO Auto-generated constructor stub
	}

	@Override
	public void obterArea() {
		// TODO Auto-generated method stub
		System.out.println("Tetraedro - Tridimensional - Area: "+4*((base*base)*Math.sqrt(3)/4));
	}
	@Override
	public void obterVolume() {
		System.out.println("Volume: "+(base*base*base)*Math.sqrt(2)/12);
		
	}

}
