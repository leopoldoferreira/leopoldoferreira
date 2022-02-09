package ex6;

class Soma
{
	public static int doisValores(int a,int b)
	{
	return a+b;
	}
	public double doisValores(double a,int b)
	{
	return a+b;
	}
	public double doisValores(double a,double b)
	{
	return a+b;
	}
}

class TesteSoma
{
	public static void main(String[] args)
	{
	Soma soma = new Soma();
	byte b = 20;
	short s = 99;
	int i = 1000;
	long l = 1234L;
	float f = 3.1416f;
	double d = 2000;
	
	System.out.println(Soma.doisValores(b,s)); // int, int
	System.out.println(Soma.doisValores(i,s)); // int, int
	System.out.println(Soma.doisValores(i,i)); // int, int
	System.out.println(soma.doisValores(l,b)); // double, int
	System.out.println(soma.doisValores(f,s)); // double, int
	System.out.println(soma.doisValores(d,b)); // double, int
	System.out.println(soma.doisValores(b,d)); // double, double
	System.out.println(soma.doisValores(i,l)); // double, double
	System.out.println(soma.doisValores(l,l)); // double, double
	System.out.println(soma.doisValores(d,f)); // double, double
	}
}