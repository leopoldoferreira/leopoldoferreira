#include<stdio.h>
#include<stdlib.h>
float expoente(float b,float exp)
{
    int i;
    float result=b;
    if (exp<0){
        printf("Expoente invalido");
        exit(0);
    }
    if(exp==0)
        return 1;
    else
    for (i=1;i<exp;i++)
    return result*b;
}
int main()
{
    float base,exp;
    printf("Digite a base e o expoente:\n");
    scanf("%f%f",&base,&exp);
    printf("O resultado eh: %.2f\n",expoente(base,exp));
    return 0;
}
