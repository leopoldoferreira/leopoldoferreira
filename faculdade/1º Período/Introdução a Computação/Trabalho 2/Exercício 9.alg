algoritmo "saldo"
// Fun��o :
// Autor :
// Data : 02/05/2014
// Se��o de Declara��es 
var
   sal:real
inicio
   Escreva("Digite seu saldo m�dio:")
   Leia(sal)
   Se sal<=0 Entao
      Escreva("Invalido")
   Senao
      Se sal<=200 Entao
         Escreva("Seu saldo de:",sal," tem o valor do credito de",sal*0.1)
      Senao
         Se sal<=300 Entao
            Escreva("Seu saldo de:",sal," tem o valor do credito de",sal*0.2)
         Senao
            Se sal<=400 Entao
               Escreva("Seu saldo de:",sal," tem o valor do credito de",sal*0.25)
            Senao
'               Se sal>400 Entao
                  Escreva("Seu saldo de:",sal," tem o valor do credito de",sal*0.3)
               Senao
               fimse
            fimse
         fimse
      fimse
   fimse
fimalgoritmo
