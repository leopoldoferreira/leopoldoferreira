import java.awt.Graphics;


public abstract class Forma {
		protected int xi;
		protected int yi;
		protected int xf;
		protected int yf;
		
		public abstract void desenhar(Graphics g);
		
		public Forma(int xi, int yi, int xf, int yf) {
			super();
			this.xi = xi;
			this.yi = yi;
			this.xf = xf;
			this.yf = yf;
		}

		public int getXi() {
			return xi;
		}

		public void setXi(int xi) {
			this.xi = xi;
		}

		public int getYi() {
			return yi;
		}

		public void setYi(int yi) {
			this.yi = yi;
		}

		public int getXf() {
			return xf;
		}

		public void setXf(int xf) {
			this.xf = xf;
		}

		public int getYf() {
			return yf;
		}

		public void setYf(int yf) {
			this.yf = yf;
		}
		
		
		
		
		
		
}
