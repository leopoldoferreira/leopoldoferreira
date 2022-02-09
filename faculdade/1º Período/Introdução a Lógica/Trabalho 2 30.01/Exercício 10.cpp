#include<stdio.h>
int main()
{
    int num1,num,menor,impar;
    float aux,soma,quantia,parsoma,par;
    printf("Digite um numero: ");
    scanf("%d",&num1);
    soma=num1;
    quantia=1;
    aux=num1%2;
    par=0;
    parsoma=0;
    num=0;
    impar=0;
    if(aux==0)
    {
        parsoma=parsoma+num1;
        par=par+1;
    }
    else
        impar=impar+1;
    while(num>=0)
    {
        printf("Digite outro numero: ");
        scanf("%d",&num);
        soma=soma+num;
        quantia=quantia+1;
        aux=num%2;
        if(num1<num)
            num1=num;
        if(num1<num)
            menor=num1;
        else
            menor=num;
        if(aux==0)
        {
            parsoma=parsoma+num;
            par=par+1;
        }
        else
            impar=impar+1;
    }
    printf("A soma dos numeros digitados eh: %.2f\n", soma);
    printf("A quantidade de numeros digitado eh: %.2f\n", quantia);
    printf("A media dos numeros digitados eh: %.2f\n", soma/quantia);
    printf("O maior numero eh: %d\n", num1);
    printf("O menor numero eh: %d\n", num);
    if(par<=0)
        printf("Nenhum numero par digitado\n");
    else
        printf("A media dos numeros pares digitados eh: %.2f\n", parsoma/par);
    if(impar<=0)
        printf("Nenhum numero impar digitado\n");
    else
        printf("A porcentagem de numeros impares digitados eh: %f\n",impar/quantia);

    return 0;


}
