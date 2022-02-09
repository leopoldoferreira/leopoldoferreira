algoritmo "Maior3"
// Função :
// Autor :
// Data : 02/05/2014
// Seção de Declarações 
var
   n1,n2,n3:real
inicio
   Escreva("Digite os tres numeros:")
   Leia(n1,n2,n3)
   Se (n1>n2) e (n1>n3) Entao
      Escreva("o maior numero eh ",n1)
   Senao
      Se (n2>n1) e (n2>n3) Entao
         Escreva("o maior numero eh ",n2)
      Senao
         Se (n3>n1) e (n3>n2) Entao
            Escreva("o maior numero eh ",n3)
         Senao
         fimse
      fimse
   fimse
fimalgoritmo
