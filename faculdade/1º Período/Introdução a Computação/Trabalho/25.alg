algoritmo "semnome"
// Fun��o :
// Autor :
// Data : 3/26/2014
// Se��o de Declara��es 
var
      hr,min,seg,mint:real
inicio
      Escreva("Digite uma hora onde no lugar de : aperte enter=")
      Leia(hr,min)
      // Se��o de Comandos
      mint<-hr*60+min
      seg<-mint*60
      // Sa�da
      Escreval("A hora que digitou tem",mint," minutos.")
      Escreval("A hora que digitou tem",seg," segundos.")
      
fimalgoritmo
