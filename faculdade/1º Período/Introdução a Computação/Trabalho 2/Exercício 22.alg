algoritmo "Risco"
// Função :
// Autor :
// Data : 03/05/2014
// Seção de Declarações 
var
   idade:inteiro
   peso:real
inicio
   Escreva("Digite sua idade:")
   Leia(idade)
   Escreva("Digite seu peso:")
   Leia(peso)
   Se idade<0 Entao
      Escreva("Invalido")
   Senao
      Se peso<0 Entao
         Escreva("Invalido")
      Senao
         Se (peso<=60) e (idade<20) Entao
            Escreva("Grupo 9")
         Senao
            Se (peso>60) e (peso<=90) e (idade<20) Entao
               Escreva("Grupo 8")
            Senao
               Se (peso>90) e (idade<20) Entao
                  Escreva("Grupo 7")
               Senao
                  Se (peso<=60) e (idade>=20) e (idade<=50) Entao
                     Escreva("Grupo 6")
                  Senao
                     Se (peso>60) e (peso<=90) e (idade>=20) e (idade<=50) Entao
                        Escreva("Grupo 5")
                     Senao
                        Se (peso>90) e (idade>=20) e (idade<=50) Entao
                           Escreva("Grupo 4")
                        Senao
                           Se (peso<=60) e (idade>50) Entao
                              Escreva("Grupo 3")
                           Senao
                              Se (peso>60) e (peso<=90) e (idade>50) Entao
                                 Escreva("Grupo 2")
                              Senao
                                 Se (peso>90) e (idade>50)  Entao
                                    Escreva("Grupo 1")
                                 Senao
                                 fimse
                              fimse
                           fimse
                        fimse
                     fimse
                  fimse
               fimse
            fimse
         fimse
      fimse
   fimse
fimalgoritmo
