algoritmo "produto"
// Função :
// Autor :
// Data : 03/05/2014
// Seção de Declarações 
var
   preco:real
inicio
   Escreva("Digite o valor do produto:")
   Leia(preco)
   Se preco<=0 Entao
      Escreva("Invalido")
   Senao
      Se preco<50 Entao
         Escreval("O novo preco sera:",preco+preco*0.05)
         Escreva("Classificacao: Barato")
      Senao
         Se (preco>=50) e (preco<=80) Entao
            Escreval("O novo preco sera:",preco+preco*0.1)
            Escreva("Classificacao: Barato")
         Senao
            Se (preco>80) e (preco<100) Entao
               Escreval("O novo preco sera:",preco+preco*0.1)
               Escreva("Classificacao: Normal")
            Senao
               Se (preco>100) e (preco<=120) Entao
                  Escreval("O novo preco sera:",preco+preco*0.15)
                  Escreva("Classificacao: Normal")
               Senao
                  Se (preco>120) e (preco<=200) Entao
                     Escreval("O novo preco sera:",preco+preco*0.15)
                     Escreva("classificacao: Caro")
                  Senao
                     Se preco>200 Entao
                        Escreval("O novo preco sera:",preco+preco*0.15)
                        Escreva("Classificacao: Caro")
                     Senao
                     fimse
                  fimse
               fimse
            fimse
         fimse
      fimse
   fimse
fimalgoritmo
