algoritmo "maior"
// Função :
// Autor :
// Data : 01/05/2014
// Seção de Declarações 
var
   n1,n2,maior:real
inicio
   Escreva("Digite os dois numero a serem analisados:")
   Leia(n1,n2)
   maior<-n1-n2
   Se maior=0 Entao
      Escreva("numeros iguais, invalido.")
   Senao
      Se maior<0 Entao
         Escreva("O numero",n2," eh menor")
      Senao
         Se maior>0 Entao
            Escreva("O numero ",n1," eh menor")
         Senao
         fimse
      fimse
   fimse
fimalgoritmo
