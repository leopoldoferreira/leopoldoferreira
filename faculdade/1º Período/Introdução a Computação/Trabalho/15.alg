algoritmo "João"
// Função :
// Autor :
// Data : 3/26/2014
// Seção de Declarações 
var
      salf,sal,divi,cont1,cont2:Real
inicio
      Escreva("Digite o seu sálario:")
      Leia(sal)
      Escreva("Digite os valores de suas contas a pagar:")
      Leia(cont1,cont2)
      // Seção de Comandos
      divi<-cont1+cont1*0.02+cont2+cont2*0.02
      salf<-sal-divi
      // Saída
      Escreval("Restará",salf," de seu salário")
      
fimalgoritmo
