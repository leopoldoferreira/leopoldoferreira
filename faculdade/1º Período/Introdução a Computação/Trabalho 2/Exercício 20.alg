algoritmo "categoria"
// Função :
// Autor :
// Data : 03/05/2014
// Seção de Declarações 
var
   idade:inteiro
inicio
   Escreva("Digite sua idade:")
   Leia(idade)
   Se idade<5 Entao
      Escreva("Invalido")
   Senao
      Escolha (idade)
      Caso 5,6,7
         Escreva("Categoria Infantil")
      Caso 8,9,10
         Escreva("Categoria Juvenil")
      Caso 11,12,13,14,15
         Escreva("Categoria Adolescente")
      Outrocaso
         Se (idade>=16) e (idade<=30)  Entao
            Escreva("Categoria Adulto")
         Senao
            Se idade>30 Entao
               Escreva("Categoria Senior")
            Senao
            fimse
         fimse
      fimescolha
   fimse
fimalgoritmo
