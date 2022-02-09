package ex1010;
	public class Desenhador{
		
		private static Forma[] forma;
		public Desenhador(){
			
			forma = new Forma[6];
			//base, altura
			forma[0] = new Triangulo(4,4);
			//parametros: pi=base,raio=altura
			forma[1] = new Circulo(3.14,5);
			// lado, lado
			forma[2] = new Quadrado(2,2);
			forma[3] = new Cubo(5);
			forma[4] = new Esfera(2);
			forma[5] = new Tetraedro(2);
			for(int i = 0; i < forma.length; i++ ){
				forma[i].obterArea();
				forma[i].obterVolume();
			}
			
		}
		public static void main(String[] args) {
			Desenhador d = new Desenhador();
				
			}
	}

