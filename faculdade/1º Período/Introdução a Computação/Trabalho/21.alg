algoritmo "Hora Extra"
// Função :
// Autor :
// Data : 3/26/2014
// Seção de Declarações 
var
      nht,vsm,nhet,ht,he,qthet,sal,salb:real
inicio
      Escreva("Digite o número de horas trabalhadas:")
      Leia(nht)
      Escreva("Digite o valor do salário mínimo:")
      Leia(vsm)
      Escreva("Digite o número de horas extras trabalhadas:")
      Leia(nhet)
      // Seção de Comandos
      ht<-vsm/8
      he<-vsm/4
      salb<-nht*ht
      qthet<-nhet*he
      sal<-salb+qthet
      // Saída
      Escreval("Você receberá o salário de:",sal)

fimalgoritmo
