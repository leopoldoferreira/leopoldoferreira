algoritmo "reajuste"
// Função :
// Autor :
// Data : 5/12/2014
// Seção de Declarações 
var
   sal:real
inicio
   Escreva("Digite seu salario:")
   Leia(sal)
   Se sal<=0 Entao
      Escreva("Invalido")
   Senao
      Se sal<=300 Entao
         Escreva("Aumento de",sal*0.35)
      Senao
         Se sal>300 Entao
            Escreva("Aumento de",sal*0.15)
         Senao
         fimse
      fimse
   fimse
fimalgoritmo
// Seção de Comandos 
fimalgoritmo
