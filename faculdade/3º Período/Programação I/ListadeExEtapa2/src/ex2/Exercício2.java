package ex2;
/* 2. Identifique e explique o(s) erro(s) na classe abaixo.
class NumeroComplexo {
 Declaração dos campos desta classe 
float real,imaginário;
/** * Declaração dos métodos desta classe 
float valor() {
return real,imaginário;
} } // fim da classe

 Linha 2 está normal.
 * na 4 também está normal.
 * na 6 o método valor é definido tipo float, retorna número tipo float mas sua sintaxe está incorreta,
 * nao se pode retornar dois valores em um mesmo método.
 * Possível modificação para que o programa rode corretamente.  */

class NumeroComplexo{
	float real,imaginário,resultado;
	
	public float valor(){
		//aplica a conta nas duas variáveis
		return resultado;
	}

}

