package ex4;

import java.sql.Date;

import javax.xml.crypto.Data;

 class Atribuicoes {
public static void main(String[] args) {
Data a; 
Data b = new Date(); 
b = null; // anulando a v�riavel b;
b = a; // b que era nulo, recebe a.
}
} // fim da classe 

 
/*  

 class Atribuicoes {
public static void main(String[] args) {
Data a; Data b = new Data(); b = null; b = a;
}
} // fim da classe

Primeiro erro � a identa��o que atrapalha a visualiza��o.
Pelo que o java me disse, precisei importar  javax.xml.crypto.Data;
para criar vari�veis do tipo data, por�m n�o posso instanciar esse tipo de vari�vel.
o que faz 

Outra coisa seria se deveria ser escrito DATE, dai deveria ser importado a java.sql.Date;
Cria-se vari�vel a do tipo Date, b � instanciado, por�m fica indefinido um valor,
b � anulado, e b recebe a.

N�o consegui entender com clareza, mas foi isso que enxerguei.

Segundo o que peguei dos colegas que voc� disse pra ele, sim vou adicionar e n�o reformular a resposta...
falta declarar a visibilidade da classe e no new, precisa ser DatE, porque n�o tem como instanciar DatA.

 
 */