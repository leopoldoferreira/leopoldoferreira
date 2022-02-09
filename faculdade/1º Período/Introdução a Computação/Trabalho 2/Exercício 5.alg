algoritmo "Operacoes"
// Função :
// Autor :
// Data : 02/05/2014
// Seção de Declarações 
var
   n1,n2,op,dif:real
inicio
   Escreva("Digite dois numeros:")
   Leia(n1,n2)
   Escreval("Os numeros escolhidos foram",n1," e",n2)
   Escreval("Escolha uma operacao sendo:")
   Escreval("1: Sera feito a média aritmetica")
   Escreval("2: Diferenca do menor para o maior")
   dif<-n1-n2
   Escreval("3: Produto dos numeros")
   Escreval("4: Divisao do pimeiro pelo segundo")
   Escreval("Digite o numero da operacao desejada:")
   Leia(op)
   Escolha(op)
   Caso 1
      Escreva("O resultado eh",(n1+n2)/2)
   Caso 2
      Se dif>0 Entao
         Escreva("O resultado eh",n2-n1)
      Senao
         Se dif<0 Entao
            Escreva("O resultado eh",n1-n2)
         Senao
         fimse
      fimse
   Caso 3
      Escreva("O resultado eh",n1*n2)
   Caso 4
      Se n2=0 Entao
         Escreva("Segundo numero deve ser diferente de zero")
      Senao
         Escreva("O resultado eh",n1/n2)
      fimse
   Outrocaso
   Escreva("Opcao Invalida")
   fimescolha
FIMALGORITMO
