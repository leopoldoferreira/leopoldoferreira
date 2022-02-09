#include<stdio.h>
int main ()
{
    double sal,aumento;
    int ano,anoatual;
    printf("Digite o ano atual: ");
    scanf("%d",&anoatual);
    if (anoatual<2002)
    {
        printf("Ano Invalido.");
    }
    else
    for (sal=600,ano=2002,aumento=0.015;ano<=anoatual;sal=sal+(sal*aumento),ano=ano+1,aumento=aumento*2)
    {
        printf("Salario do ano de %d: %.2f\n",ano,sal);
    }
}

