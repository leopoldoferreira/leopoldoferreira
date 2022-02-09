package ex1010;

public abstract class Forma {
		protected double base;
		protected double altura;
		
		public Forma(double base, double altura) {
			super();
			this.base = base;
			this.altura = altura;
		}

		public double getBase() {
			return base;
		}

		public void setBase(double base) {
			this.base = base;
		}

		public double getAltura() {
			return altura;
		}

		public void setAltura(double altura) {
			this.altura = altura;
		}

		public abstract void obterArea();
		public abstract void obterVolume();

		
}
