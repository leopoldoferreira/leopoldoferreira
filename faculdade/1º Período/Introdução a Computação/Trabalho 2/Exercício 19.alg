algoritmo "IMC"
// Fun��o :
// Autor :
// Data : 03/05/2014
// Se��o de Declara��es 
var
   h:real
   sexo:inteiro
inicio
   Escreva("Digite sua altura em metros:")
   Leia(h)
   Se (h<=0) e (h>=3) Entao
      Escreva("Invalido")
   Senao
      Escreval("Escolha seu sexo:")
      Escreval("1: Masculino")
      Escreval("2: Feminino")
      Escolha (sexo)
      Caso 1
         Escreva("Seu peso ideal �:",(72.7*h)-58)
      Caso 2
         Escreva("Seu peso ideal �:",(62.1*h)-44.7)
      Outrocaso
         Escreva("Invalido")
      fimescolha
   fimse
fimalgoritmo
