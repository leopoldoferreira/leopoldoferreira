algoritmo "Idade"
// Fun��o :
// Autor :
// Data : 3/26/2014
// Se��o de Declara��es 
var
      ano,nasc,atual,mes,sem,dia:Real
inicio
      Escreva("Digite seu ano de nascimento e o ano atual:")
      Leia(nasc,atual)
      // Se��o de Comandos
      ano<-atual-nasc
      mes<-ano*12
      sem<-ano*52
      dia<-ano*365
      // Sa�da
      Escreval("Voc� tem",ano," anos de idade.")
      Escreval("Voc� tem",mes," meses de idade.")
      Escreval("Voc� tem",sem," semanas de idade.")
      Escreval("Voc� tem",dia," dias de idade.")
      
fimalgoritmo
