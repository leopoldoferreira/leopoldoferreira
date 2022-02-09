algoritmo "Idade"
// Função :
// Autor :
// Data : 3/26/2014
// Seção de Declarações 
var
      ano,nasc,atual,mes,sem,dia:Real
inicio
      Escreva("Digite seu ano de nascimento e o ano atual:")
      Leia(nasc,atual)
      // Seção de Comandos
      ano<-atual-nasc
      mes<-ano*12
      sem<-ano*52
      dia<-ano*365
      // Saída
      Escreval("Você tem",ano," anos de idade.")
      Escreval("Você tem",mes," meses de idade.")
      Escreval("Você tem",sem," semanas de idade.")
      Escreval("Você tem",dia," dias de idade.")
      
fimalgoritmo
