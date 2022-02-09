algoritmo "ABCD"
// Função :
// Autor :
// Data : 5/28/2014
// Seção de Declarações 
var
   a,b,c,d,i,aux2,aux:inteiro
inicio
   Para i de 1 ate 5 faca
   Escreval("Digite A,B,C,D")
   Leia(a,b,c,d)
   Escreval("Os numeros lidos foram:",a,b,c,d)
   fimpara
   Se(a>b) Entao
   aux<-a; a<-b; b<-aux
   Se(b>c) Entao
   aux<-b; b<-c; c<-aux
   Se(c>d) Entao
   aux<-c; c<-d; d<-aux
   Se(d>a) Entao
   aux<-d; d<-a; a<-aux
   fimse
   fimse
   fimse
   fimse
   Escreval("Valores em ordem crescente:",d,c,b,a)
   Escreval("Valores em ordem decrescente:",a,b,c,d)
fimalgoritmo
