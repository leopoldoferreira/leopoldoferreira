#include<stdio.h>

int main(){
    int fatorial(int n);
    int n;
    printf("Digite um numero para calcular o fatorial:");
    scanf("%d",&n);
    printf("O Fatorial de %d eh: %d",n,fatorial(n));
    return 0;
}

int fatorial(int x){
    if(x==0)return 1;
    return x*fatorial(x-1);
}
