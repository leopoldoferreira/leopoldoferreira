algoritmo "novo salario"
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
      Se sal<=300 Entao
         Escreva("Seu novo salario sera:",sal+sal*0.5)
      Senao
         Se (sal>300) e (sal<=500) Entao
            Escreva("Seu novo salario sera:",sal+sal*0.4)
         Senao
            Se (sal>500) e (sal<=700) Entao
               Escreva("Seu novo salario sera:",sal+sal*0.3)
            Senao
               Se (sal>700) e (sal<=800) Entao
                  Escreva("Seu novo salario sera:",sal+sal*0.2)
               Senao
                  Se (sal>800) e (sal<=1000) Entao
                     Escreva("Seu novo salario sera:",sal+sal*0.1)
                  Senao
                     Se sal>1000 Entao
                        Escreva("Seu novo salario sera:",sal+sal*0.05)
                     Senao
                     fimse
                  fimse
               fimse
            fimse
         fimse
      fimse
   fimse
fimalgoritmo
