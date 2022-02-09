package ex2Lista2;

public class Salário {

		public Double alteraSalário30(Double salario){
			salario = salario+(salario*0.3);
			return salario;
		}
		public Double alteraSalário20(Double salario){
			salario = salario+(salario*0.2);
			return salario;
		}
		public Double alteraSalário10(Double salario){
			salario = salario-(salario*0.1);
			return salario;
		}
	
}
