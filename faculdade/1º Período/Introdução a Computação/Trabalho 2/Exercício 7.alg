algoritmo "Salario"
// Função :
// Autor :
// Data : 02/05/2014
// Seção de Declarações 
var
   sal:real
inicio
   Escreva("Digite seu salario:")
   Leia(sal)
   Se sal<=0 Entao
      Escreva("Invalido")
   Senao
      Se sal>=500 Entao
         Escreva("Pelo direito seu novo salario sera:",sal*0.3+sal)
      Senao
         Se sal<500 Entao
            Escreva("Voce nao tem direito ao reajuste")
         Senao
         fimse
      fimse
   fimse
fimalgoritmo
