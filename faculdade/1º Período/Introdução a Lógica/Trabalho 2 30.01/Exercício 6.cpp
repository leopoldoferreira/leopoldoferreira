#include<stdio.h>
int main ()
{
    // soma dos 50 primeiros numeros pares
    int i,n=0,aux,a,soma=0;
    //an = ((an-1} + (an+1})/2
    for (i=1;i<=50;i++)
    {
        if (i%2==0)
        soma=soma+i;
    }
        printf("Soma dos 50 primeiros numeros pares eh: %d",soma);
    return 0;
}
