algoritmo "média"
// Função :
// Autor :
// Data : 01/05/2014
// Seção de Declarações 
var
   n1,n2,n3,n4,nota:real
inicio
   Escreva("Digite as quatro notas:")
   Leia(n1,n2,n3,n4)
   nota<-(n1+n2+n3+n4)/4
   Se nota<0 Entao
      Escreva("Invalido")
   Senao
         Se nota<7 Entao
            Escreva("Reprovado")
         Senao
               Se nota>=7 Entao
                  Escreva("Aprovado")
               Senao
               Fimse
         Fimse
   Fimse
fimalgoritmo
