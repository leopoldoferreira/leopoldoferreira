algoritmo "hipotenusa"
// Fun��o :
// Autor :
// Data : 3/26/2014
// Se��o de Declara��es 
var
      ca,co,h,hf:real
inicio
      Escreva("Digite os valores do catetos:")
      Leia(co,ca)
      // Se��o de Comandos
      h<-ca^2+co^2
      hf<-RaizQ(h)
      // Sa�da
      Escreval("O valor da hipotenusa �:",hf)
      
fimalgoritmo
