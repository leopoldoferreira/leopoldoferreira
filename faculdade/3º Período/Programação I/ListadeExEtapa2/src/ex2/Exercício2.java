package ex2;
/* 2. Identifique e explique o(s) erro(s) na classe abaixo.
class NumeroComplexo {
 Declara��o dos campos desta classe 
float real,imagin�rio;
/** * Declara��o dos m�todos desta classe 
float valor() {
return real,imagin�rio;
} } // fim da classe

 Linha 2 est� normal.
 * na 4 tamb�m est� normal.
 * na 6 o m�todo valor � definido tipo float, retorna n�mero tipo float mas sua sintaxe est� incorreta,
 * nao se pode retornar dois valores em um mesmo m�todo.
 * Poss�vel modifica��o para que o programa rode corretamente.  */

class NumeroComplexo{
	float real,imagin�rio,resultado;
	
	public float valor(){
		//aplica a conta nas duas vari�veis
		return resultado;
	}

}

