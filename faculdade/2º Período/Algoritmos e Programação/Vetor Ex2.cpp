#include<stdio.h>
int main ()
{
float vet1[7],vet2[7],vet3[7];
int cont;

    for(cont=0;cont<7;cont++)
    {
    printf("Digite o vetor 1[%d] : ",cont+1);
    scanf("%f",&vet1[cont]);
    }
        for(cont=0;cont<7;cont++)
    {
    printf("Digite o vetor 2[%d] : ",cont+1);
    scanf("%f",&vet2[cont]);
    }
        for(cont=0;cont<7;cont++)
    {
        printf("\t%.2f",vet1[cont]);
    }
    printf ("\n");
    for(cont=0;cont<7;cont++)
    {
        printf("\t%.2f",vet2[cont]);
    }
    printf("\n");
    printf("Vetor 3:");
    printf("\n");
        for(cont=0;cont<7;cont++)
    {
        printf("\t%.2f",vet2[cont]+vet1[cont]);
    }

return 0;
}
