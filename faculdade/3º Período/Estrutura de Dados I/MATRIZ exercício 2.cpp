#include<stdio.h>
int main ()
{
    int vet1[7],vet2[7],vet3[7],l;
    for(l=0;l<7;l++)
    {
        printf("Digite o vet1 [%d]",l+1);
        scanf("%d",&vet1[l]);
    }
    for(l=0;l<7;l++)
    {
        printf("Digite o vet2 [%d]",l+1);
        scanf("%d",&vet2[l]);
    }
    printf("\n\nMostrando os Vetores\n\n");
    for(l=0;l<7;l++)
    {
        printf("\t%d",vet1[l]);
    }
    printf("\n");
    for(l=0;l<7;l++)
    {
        printf("\t%d",vet2[l]);
    }
    printf("\n");
    for(l=0;l<7;l++)
    {
        printf("\t%d",vet2[l]+vet2[l]);
    }
    printf("\n");


    return 0;
}
