package Ex10_09;

public class Teste {
	
	private static Funcionario[] funcionario;
	
	public static void main(String args []){
		
		int mes_atual = 9;
		
		System.out.printf("Estamos no mês %d.",mes_atual);
		
		funcionario = new Funcionario[3];
		
		funcionario[0] = new Funcionario("Leopoldo", 1000,31,21,1995);
		funcionario[1] = new Funcionario("Leonardo",  2000, 3,20,1995);
		funcionario[2] = new Funcionario("Lelisberto",3000,9,30,1995);

		
		
			for(int i = 0 ; i < funcionario.length ; i++){
				
				if(funcionario[i].getDia() == 0 || funcionario[i].getMes() == 0){
					System.out.printf("\n\nData inválida para esse %s , Faça novamente com os dados corretos: %s",funcionario[i].toString(), funcionario[i].toStringDate());
				}
				else{
					System.out.printf("\n\n%s, Salário: %s, Data de Nascimento: %s",funcionario[i].toString(),funcionario[i].getSalario(), funcionario[i].toStringDate()+ ".");
				if(funcionario[i].getMes() == mes_atual)	
					System.out.printf("\nBonus: %s, Salario total do mês %s",funcionario[i].getAniverssario(),funcionario[i].getSalario()+funcionario[i].getAniverssario());
				}
			}


}
	
}