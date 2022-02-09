#include<stdio.h>
int main ()
{
    int vet[10],l;
    for(l=0;l<10;l++)
    {
    printf("Digite o vetor [%d]",l+1);
    scanf("%d",&vet[l]);
    }
    for(l=0;l<10;l++)
    {
    printf("\n");
    printf("\t%d",vet[l]);
    }
}
