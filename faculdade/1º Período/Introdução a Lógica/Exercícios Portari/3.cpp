#include<stdio.h>
int main()
{
    float numero;
    printf("Digite um numero a ser analisado:");
    scanf("%f",&numero);
    if(numero>0)
        {
        printf("Esse numero eh positivo");
        }
    else
        {
        if(numero<0)
            {
            printf("Esse numero eh negativo");
            }
        else
        {
            if(numero==0)
            {
            printf("Esse numero eh nulo");
            }
            else
            {

            }
        }
    }
    return 0;
}
