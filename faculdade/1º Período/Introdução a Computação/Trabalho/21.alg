algoritmo "Hora Extra"
// Fun��o :
// Autor :
// Data : 3/26/2014
// Se��o de Declara��es 
var
      nht,vsm,nhet,ht,he,qthet,sal,salb:real
inicio
      Escreva("Digite o n�mero de horas trabalhadas:")
      Leia(nht)
      Escreva("Digite o valor do sal�rio m�nimo:")
      Leia(vsm)
      Escreva("Digite o n�mero de horas extras trabalhadas:")
      Leia(nhet)
      // Se��o de Comandos
      ht<-vsm/8
      he<-vsm/4
      salb<-nht*ht
      qthet<-nhet*he
      sal<-salb+qthet
      // Sa�da
      Escreval("Voc� receber� o sal�rio de:",sal)

fimalgoritmo
