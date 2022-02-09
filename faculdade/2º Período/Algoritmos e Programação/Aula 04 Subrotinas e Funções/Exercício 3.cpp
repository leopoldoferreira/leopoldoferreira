#include<stdio.h>
#include<string.h>
void qualquercoisa(float cod[5],float valor[5],float lucro[5])
{
    float venda=0;
    int i;
    printf("Digite o codigo do produto [%d]:",cod+1);
    scanf("%f",&cod);
    printf("Digite o valor de custo do produto [%d]:",valor+1);
    gets(valor);
    printf("Digite a porcentagem de lucro desejada do produto [%d]:",lucro+1);
    gets(lucro);
    for(i=0;i<=5;i++){
        venda=valor[i]+lucro[i];
        printf("%f",cod[i])
    printf("%f",venda);}
 //valor da venda = valor de custo + % de lucro desejada
}
int main()
{
    int i=0;
for(i=0;i<=5;i++)
printf("f",cod[i]);
printf("f",venda);

}
