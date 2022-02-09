#include<stdio.h>
void fatorial()
{
    int fat,i;
    printf("Digite um numero para ser calculado seu fatorial:");
    scanf("%d",&i);
    for(fat=1;i>1;i--){
    fat=fat*i;
    }
    printf("Resultado: %d",fat);
}
int main()
{
    fatorial();
}
