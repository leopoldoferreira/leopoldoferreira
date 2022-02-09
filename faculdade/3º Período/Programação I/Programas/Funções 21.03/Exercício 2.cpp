#include<stdio.h>
#include<math.h>
int main()
{
    int potencia(int base,int expoente);
    int base,expoente;
    printf("Digite o valor da base e do expoente:");
    scanf("%d%d",&base,&expoente);
    printf("%d elevado a %d eh: %d",base,expoente,potencia(base,expoente));
}
int potencia(int a,int b)
{
    if(b==0)return 1;
    return pow(a,b);
}
