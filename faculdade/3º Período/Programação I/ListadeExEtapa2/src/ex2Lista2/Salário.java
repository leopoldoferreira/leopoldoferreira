package ex2Lista2;

public class Sal�rio {

		public Double alteraSal�rio30(Double salario){
			salario = salario+(salario*0.3);
			return salario;
		}
		public Double alteraSal�rio20(Double salario){
			salario = salario+(salario*0.2);
			return salario;
		}
		public Double alteraSal�rio10(Double salario){
			salario = salario-(salario*0.1);
			return salario;
		}
	
}
