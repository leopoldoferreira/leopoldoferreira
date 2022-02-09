#include<stdio.h>
#include<math.h>
int main(){
int n, esc,aux;

printf("Insira um valor para o qual deseja calcular seu fatorial: ");
scanf("%d", &esc);
esc = aux;

for(n = 1; esc > 1; esc = esc - 1)
n = n * esc;

printf("\nFatorial calculado: %d", n);

for(int i = aux; i>=0 ; i--)
    printf("%d",i);







}
