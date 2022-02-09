#include<stdio.h>
int main()
{
    int numero;
    printf("Digite um numero a ser analisado: ");
    scanf("%d",&numero);
    if (numero%2==0)
        {
        printf("O numero eh par");
        }
    else
        {
        printf("O numero eh impar");
        }

 return 0;
}
