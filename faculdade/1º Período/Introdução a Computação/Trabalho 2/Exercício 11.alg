algoritmo "aumento"
// Fun��o :
// Autor :
// Data : 03/05/2014
// Se��o de Declara��es 
var
   sal:real
inicio
   Escreva("Digite seu salario:")
   Leia(sal)
   Se sal<=0 Entao
      Escreva("Invalido")
   Senao
      Se sal<=300 Entao
         Escreva("Seu novo salario sera",sal+sal*0.15)
      Senao
         Se (sal>300) e (sal<=600) Entao
            Escreva("Seu novo salario sera",sal+sal*0.10)
         Senao
            Se (sal>600) e (sal<=900) Entao
               Escreva("Seu novo salario sera",sal+sal*0.05)
            Senao
               Se sal>900 Entao
                  Escreva("Sem aumento")
               Senao
               fimse
            fimse
         fimse
      fimse
   fimse
fimalgoritmo
