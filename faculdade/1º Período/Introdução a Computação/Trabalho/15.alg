algoritmo "Jo�o"
// Fun��o :
// Autor :
// Data : 3/26/2014
// Se��o de Declara��es 
var
      salf,sal,divi,cont1,cont2:Real
inicio
      Escreva("Digite o seu s�lario:")
      Leia(sal)
      Escreva("Digite os valores de suas contas a pagar:")
      Leia(cont1,cont2)
      // Se��o de Comandos
      divi<-cont1+cont1*0.02+cont2+cont2*0.02
      salf<-sal-divi
      // Sa�da
      Escreval("Restar�",salf," de seu sal�rio")
      
fimalgoritmo
