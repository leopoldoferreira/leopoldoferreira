algoritmo "semnome"
// Função :
// Autor :
// Data : 3/26/2014
// Seção de Declarações 
var
      hr,min,seg,mint:real
inicio
      Escreva("Digite uma hora onde no lugar de : aperte enter=")
      Leia(hr,min)
      // Seção de Comandos
      mint<-hr*60+min
      seg<-mint*60
      // Saída
      Escreval("A hora que digitou tem",mint," minutos.")
      Escreval("A hora que digitou tem",seg," segundos.")
      
fimalgoritmo
