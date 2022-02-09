algoritmo "hipotenusa"
// Função :
// Autor :
// Data : 3/26/2014
// Seção de Declarações 
var
      ca,co,h,hf:real
inicio
      Escreva("Digite os valores do catetos:")
      Leia(co,ca)
      // Seção de Comandos
      h<-ca^2+co^2
      hf<-RaizQ(h)
      // Saída
      Escreval("O valor da hipotenusa é:",hf)
      
fimalgoritmo
