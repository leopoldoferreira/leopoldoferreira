#include<stdio.h>
int main()
{
    int numero;
    printf("Digite um numero a ser divido por 7: ");
    scanf("%d",&numero);
    if (numero%7==0)
        {
        printf("O numero %d eh divisel por 7",numero);
        }
    else
        {
        printf("O numero %d nao eh divisivel por 7",numero);
        }

 return 0;
}
