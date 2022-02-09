#include<stdio.h>
#include<math.h>
float div(float n);
int main()
{
    float num;
    printf("Digite um valor de x: \n");
    scanf("%f",&num);
    printf("valor de S: %.2f\n",div(num));
    return 0;
}
float div(float n)
{
    float soma=0;
    int i;
    float t;
    for(i=2;i<=n;i++){
    t=i;
    soma=soma+1/t;
    }
    return soma;
}
