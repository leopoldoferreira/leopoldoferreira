algoritmo "Escada"
// Fun��o :
// Autor :
// Data : 4/2/2014
// Se��o de Declara��es 
var
      ang,dis,rad,hip:real
inicio
      Escreva("Digite o �ngulo formado pela escada apoiada no ch�o:")
      Leia(ang)
      Escreva("Digite a dist�ncia formada entre a escada e a parede:")
      Leia(dis)
      // Se��o de Comandos
      rad<-(pi*ang)/180
      hip<-dis/rad
      // Sa�da
      Escreval("A medida da escada �:",hip)
      
fimalgoritmo
