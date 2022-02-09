#include<stdio.h>
int soma(int num);
int main()
{
    int n;
    printf("Digite um numero natural: \n");
    scanf("%d",&n);
    printf("Soma dos naturais entre 0 e %d eh: %d\n",n,soma(n));
    return 0;
}
int soma(int num)
{
    int n=0,result=0;
    if(soma==0){
        result=0;
    }
    else
    for(n=0;n<=num;n++){
    result=n+soma(n-1);
    }
    return result;
}
