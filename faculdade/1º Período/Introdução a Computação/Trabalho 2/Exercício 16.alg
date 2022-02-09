algoritmo "desconto"
// Função :
// Autor :
// Data : 03/05/2014
// Seção de Declarações 
var
   preco,codigo:real
inicio
   Escreva("Digite o valor do produto:")
   Leia(preco)
   Escreva("Digite o código do produto:")
   Leia(codigo)
   Se preco<=0 Entao
      Escreva("Invalido")
   Senao
      Se preco<=30 Entao
         Escreval("Preco:",preco)
         Escreva("Sem desconto neste valor")
      Senao
         Se (preco>30) e (preco<=100) Entao
            Escreval("Preco:",preco)
            Escreval("Valor do desconto:",preco*0.1)
            Escreva("Novo preco:",preco+preco*0.1)
         Senao
            Se preco>100 Entao
               Escreval("Preco:",preco)
               Escreval("Valor do desconto:",preco*0.15)
               Escreva("Novo preco:",preco+preco*0.15)
            Senao
            fimse
         fimse
      fimse
   fimse
fimalgoritmo
