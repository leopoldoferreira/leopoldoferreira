algoritmo "categoria"
// Função :
// Autor :
// Data : 04/05/2014
// Seção de Declarações 
var
   preco,categoria:real
   situacao:caracter
inicio
   Escreva("Digite o preco do produto")
   Leia(preco)
   Escreval("Escolha a categoria sendo:")
   Escreval("1: Limpeza")
   Escreval("2: Alimentacao")
   Escreval("3: Vestuario")
   Leia(categoria)
   Se (categoria<=0) e (categoria>=4) Entao
      Escreva("Invalido")
   Senao
   Escreval("Escolha a situacao sendo:")
   Escreval("R: Produto que necessita refrigeracao")
   Escreval("N: Produto que nao necessita de refrigeracao")
   Leia(situacao)
      Se (situacao=R) e (situacao=N) Entao
         Escreva("Leitura feita")
      Senao
         Escreva("Invalido")
         Se (preco<=25) e (categoria=1) Entao
            Escreva("Aumento de:",preco*0.05)
         Senao
            Se (preco<=25) e (categoria=2) Entao
               Escreva("Aumento de:",preco*0.08)
            Senao
               Se (preco<=25) e (categoria=3) Entao
                  Escreva("Aumento de:",preco*0.1)
               Senao
                  Se (preco>25) e (categoria=1) Entao
                     Escreva("Aumento de:",preco*0.12)
                  Senao
                     Se (preco>25) e (categoria=2) Entao
                        Escreva("Aumento de:",preco*0.15)
                     Senao
                        Se (preco>25) e (categoria=3) Entao
                           Escreva("Aumento de:",preco*0.18)
                        Senao
                           Se (categoria=2) ou (situacao=R) Entao
                              Escreva("Imposto de:",preco*0.05)
                           Senao
                              Escreva("Imposto de:",preco*0.08)


   
fimalgoritmo
