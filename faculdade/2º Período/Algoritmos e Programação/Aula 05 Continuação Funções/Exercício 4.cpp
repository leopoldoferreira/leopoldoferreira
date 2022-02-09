#include<stdio.h>
int divisores(int num);


int main()
{
    int n;
    printf("Digite um numero natural: \n");
    scanf("%d",&n);
    printf("O numero de dividores entre 1 e %d eh: %d\n",n,divisores(n));
}
int divisores(int num)
{
    int i,cont=0;
    for (i=1;i<=num;i++){
        if(num%i==0)
        cont++;
    }
    return cont;
}

