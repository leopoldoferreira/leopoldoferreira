#include <stdio.h>
int main ()
{
    int aux,num,num1,num2;
    num=0;
    num1=1;
    num2=0;
    printf("Os 10 primeiros numeros de fibbonacci sao:\n");
    for(aux=1;aux<=10;aux++)
    {
        num=num1;
        num1=num2;
        printf("%d\t",num2);
        num2=num+num1;


    }
    return 0;
}
