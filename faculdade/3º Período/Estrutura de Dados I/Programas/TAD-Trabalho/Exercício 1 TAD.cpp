#include<stdio.h>
#include<string.h>
typedef struct
{
    int esq,dir;
    int intesq,intdir;

}real[2];
real num;
void imprime()
{
    printf("Digite o primeiro numero(inteiro):");
    scanf("%d",&num[0].esq);
    printf("Digite o segundoi numero(decimal):");
    scanf("%d",&num[0].dir);
    printf("%d.%d", num[0].esq, num[0].dir);
}
void somanum()
{
    int aux,esquerda,direita;
    real num;
    printf("\nDigite um numero inteiro e um decimal:");
    scanf("%d%d",&num[0].intesq,&num[0].intdir);
    printf("Digite um numero inteiro e um decimal:");
    scanf("%d%d",&num[1].intesq,&num[1].intdir);
    printf("%d.%d + %d.%d = ",num[0].intesq,num[0].intdir,num[1].intesq,num[1].intdir);
    aux=num[0].intdir+num[1].intdir;
    if(aux>=10){
        esquerda=num[0].intesq+num[1].intesq+1;
        direita=(10-aux)*(-1);
    }
    else{
        esquerda=num[0].intesq+num[1].intesq;
        direita=aux;
        }

    printf("%d.%d",esquerda,direita);

}

int main()
{
    imprime();
    somanum();

}
