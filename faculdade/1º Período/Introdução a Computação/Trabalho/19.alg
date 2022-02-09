algoritmo "Iluminação"
// Função :
// Autor :
// Data : 3/26/2014
// Seção de Declarações 
var
      l1,l2,w,a,lamp:real
inicio
      Escreva("Digite os lados em metros do cômodo:")
      Leia(l1,l2)
      // Seção de Comandos
      a<-l1*l2
      w<-18
      lamp<-a/w
      // Saída
      Escreval("Seu cômodo tem",a," metros quadrados.")
      Escreval("Serão necessárias",lamp," lâmpadas.")
      
fimalgoritmo
