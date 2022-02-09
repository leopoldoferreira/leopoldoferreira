algoritmo "origem"
// Função :
// Autor :
// Data : 03/05/2014
// Seção de Declarações 
var
   preco:real
   codigo:inteiro
inicio
   Escreva("Digite o preco do produto:")
   Leia(preco)
   Se preco<=0 Entao
      Escreva("Invalido")
   Senao
   Escreva("Digite o codigo de origem:")
   Leia(codigo)
      Escolha (codigo)
      Caso 1
         Escreva("Procedencia: Sul")
      Caso 2
         Escreva("Procedencia: Norte")
      Caso 3
         Escreva("Procedencia: Leste")
      Caso 4
         Escreva("Procedencia: Oeste")
      Caso 5,6
         Escreva("Procedencia: Nordeste")
      Caso 7,8,9
         Escreva("Procedencia: Sudeste")
      Caso 10,11,12,13,14,15,16,17,18,19,20
         Escreva("Procedencia: Centro-oeste")
      Caso 21,22,23,24,25,26,27,28,29,30
         Escreva("Procedencia: Nordeste")
      Outrocaso
         Escreva("Invalido")
      fimescolha
   fimse
fimalgoritmo
