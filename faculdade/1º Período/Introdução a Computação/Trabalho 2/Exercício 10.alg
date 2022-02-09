algoritmo "carro"
// Função :
// Autor :
// Data : 03/05/2014
// Seção de Declarações 
var
   custofab:real
inicio
   Escreva("Digite o custo de fabrica do carro:")
   Leia(custofab)
   //custo de carro novo=custo fabrica+%distrib+impost
   Se custofab<=0 Entao
      Escreva("Valor invalido")
   Senao
      Se custofab<12000 Entao
         Escreva("O custo sera:",custofab+custofab*0.05)
      Senao
         Se (custofab>=12000) ou (custofab<=25000) Entao
            Escreva("O custo sera:",custofab+custofab*0.25)
         Senao
            Se custofab>25000 Entao
               Escreva("O custo sera:",custofab+custofab*0.35)
            Senao
            fimse
         fimse
      fimse
   fimse
fimalgoritmo
