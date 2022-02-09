#include<stdio.h>
int main ()
{
float vet1[7],vet2[7],vet3[7];
int cont;

    for(cont=0;cont<7;cont++)
    {

    printf("Digite o vetor %d : ",cont+1);
    scanf("%f",&vet1[cont]);

    }
    for(cont=0;cont<7;cont++)
    {
    printf("Digite o vetor %d : ",cont+1);
    scanf("%f",&vet2[cont]);
    }

return 0;
}
