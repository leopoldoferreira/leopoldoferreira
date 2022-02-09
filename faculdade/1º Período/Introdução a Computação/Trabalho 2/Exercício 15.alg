algoritmo "investimento"
// Função :
// Autor :
// Data : 03/05/2014
// Seção de Declarações 
var
   invest,forma:real
inicio
   Escreva("Digite o valor do investimento:")
   Leia(invest)
   Escreval("Digite a forma de investimento sendo:")
   Escreval("1: Poupanca")
   Escreval("2: Fundos da renda fixa")
   Leia(forma)
      Escolha (forma)
      Caso 1
         Escreval("Novo valor de acordo com o investimento:",invest+invest*0.03)
         Escreva("Rendimento mensal",invest*0.03)
      Caso 2
         Escreval("Novo valor de acordo com o investimento:",invest+invest*0.04)
         Escreva("Rendimento mensal",invest*0.04)
      Outrocaso
         Escreva("Invalido")
      fimescolha
   fimalgoritmo
