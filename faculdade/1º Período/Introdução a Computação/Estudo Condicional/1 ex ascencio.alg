algoritmo "semnome"
// Função :
// Autor :
// Data : 4/28/2014
// Seção de Declarações 
var
   media,n1,n2,n3,n4:real
inicio
   ESCREVA("Digite as quatro notas:")
   LEIA(n1,n2,n3,n4)
   media<-(n1+n2+n3+n4)/4
  SE (media <0) ou (media>10) ENTAO
     ESCREVAL("Invalido")
  SENAO
      SE (media<7) ENTAO
         ESCREVAL("Aluno Reprovado")
      SENAO
         SE (media>=7) ou ENTAO
            Escreval("Aluno Aprovado")
         SENAO

         Fimse
      Fimse
   Fimse
fimalgoritmo
