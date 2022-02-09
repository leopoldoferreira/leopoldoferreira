package ex4;

import java.sql.Date;

import javax.xml.crypto.Data;

 class Atribuicoes {
public static void main(String[] args) {
Data a; 
Data b = new Date(); 
b = null; // anulando a váriavel b;
b = a; // b que era nulo, recebe a.
}
} // fim da classe 

 
/*  

 class Atribuicoes {
public static void main(String[] args) {
Data a; Data b = new Data(); b = null; b = a;
}
} // fim da classe

Primeiro erro é a identação que atrapalha a visualização.
Pelo que o java me disse, precisei importar  javax.xml.crypto.Data;
para criar variáveis do tipo data, porém não posso instanciar esse tipo de variável.
o que faz 

Outra coisa seria se deveria ser escrito DATE, dai deveria ser importado a java.sql.Date;
Cria-se variável a do tipo Date, b é instanciado, porém fica indefinido um valor,
b é anulado, e b recebe a.

Não consegui entender com clareza, mas foi isso que enxerguei.

Segundo o que peguei dos colegas que você disse pra ele, sim vou adicionar e não reformular a resposta...
falta declarar a visibilidade da classe e no new, precisa ser DatE, porque não tem como instanciar DatA.

 
 */