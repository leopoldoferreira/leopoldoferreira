#include<stdio.h>
#include<math.h>
void funcao()
{
    int b,e,pot;
    printf("Digite o valor da base e do expoente:");
    scanf("%d%d",&b,&e);
    pot=pow(b,e);
    printf("Valor de %d elevado a %d eh: %d",b,e,pot);
}
int main()
{
    funcao();
}
