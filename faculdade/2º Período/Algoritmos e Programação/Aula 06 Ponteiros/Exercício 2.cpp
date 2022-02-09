#include<stdio.h>
int main()
{
    int vet[10],i;
    for (i=0;i<10;i++){
        printf("Digite o valor [%d]:\n",i+1);
        scanf("%d",&vet[i]);
    }
    int *pvet;
    pvet=vet;
    for(i=0;i<10;i++)
    printf("%d ",p[i]);
    return 0;
}
