#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int retorno(int n1,int n2,int n3)
{
    int hora,minuto,seg,soma=0;
    hora=n1*3600;
    minuto=n2*60;
    seg=n3;
    soma=hora+minuto+seg;
    return soma;
}
int main()
{
    int a,b,c;
    printf("Digite hora minuto e segundo:");
    scanf("%d%d%d",&a,&b,&c);
    printf("\nSoma:%d\n",retorno(a,b,c));
    return 0;
}

