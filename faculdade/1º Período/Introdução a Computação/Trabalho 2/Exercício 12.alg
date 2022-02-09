algoritmo "gratificacao"
// Função :
// Autor :
// Data : 03/05/2014
// Seção de Declarações 
var
   sal:real
inicio
   Escreva("Digite seu salario:")
   Leia(sal)
   Se sal<=0 Entao
      Escreva("Invalido")
   Senao
      Se sal<=350 Entao
         Escreva("Valor a receber:",sal+sal*0.07+100)
      Senao
         Se (sal>350) e (sal<=600) Entao
            Escreva("Valor a receber:",sal+sal*0.07+75)
         Senao
            Se (sal>600) e (sal<=900) Entao
               Escreva("Valor a receber:",sal+sal*0.07+50)
            Senao
               Se sal>900 Entao
                  Escreva("Valor a receber:",sal+sal*0.07+35)
               Senao
               fimse
            fimse
         fimse
      fimse
   fimse
fimalgoritmo
