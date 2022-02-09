#include<stdio.h>
#include<string.h>
int retorno(int n1,int n2)
{
    int i=0,soma=0;
     for(i=n1;i<=n2;i++){
        printf("%d ",i);
    soma+=i;}
    return soma;
}



int main()
{
    int a,b;
    printf("Digite dois numeros:");
    scanf("%d%d",&a,&b);
    printf("\nSoma:%d",retorno(a,b));
    return 0;
}
