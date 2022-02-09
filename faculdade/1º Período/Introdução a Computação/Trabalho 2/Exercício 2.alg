algoritmo "media 2"
// Função :
// Autor :
// Data : 01/05/2014
// Seção de Declarações 
var
   n1,n2,nota:real
inicio
   Escreva("Digite as duas notas:")
   Leia(n1,n2)
   nota<-(n1+n2)/2
   Se (nota>10) ou (nota<0) Entao
      Escreva("Invalido")
   Senao
      Se (nota<4) Entao
         Escreva("Reprovado")
      Senao
         Se (nota<7) Entao
            Escreva("Exame")
         Senao
            Se (nota<=10) Entao
               Escreva("Aprovado")
            Senao
            Fimse
         Fimse
      Fimse
   Fimse
fimalgoritmo
