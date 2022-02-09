#include<stdio.h>

int inverte_vetor(int *v1, int *v2, int n);

void mostra_vetor(int *v, int n);

void multiplica_escalar(int *v1, int *v2, int x, int n);

int main()
{
   int n=10,x;
   int vet1[n],vet2[n],maior,cont;
   printf("\nLer e inverter um vetor e mostrar o maior\n\n");
   for(cont=0;cont<n;cont++)
   {
       printf("Digite o %d valor: ",cont+1);
       scanf("%d",&vet1[cont]);
   }
   maior=inverte_vetor(&vet1[0],&vet2[n-1],n);
   printf("\nO maior valor e %d",maior);

   mostra_vetor(vet1,n);
   mostra_vetor(vet2,n);

   printf("\nDigite um valor para multiplicar o vetor: ");
   scanf("%d",&x);
   multiplica_escalar(vet1,vet2,x,n);

    mostra_vetor(vet1,n);
   mostra_vetor(vet2,n);

   return 0;
}

int inverte_vetor(int *v1, int *v2, int n)
{
    int i,m;
    m=*v1;
    for(i=0;i<n;i++)
    {
       //v2[n-1-i]=*v1;
       *v2=*v1;
       if(m<*v1)
        m=*v1;
       v1++;
       v2--;

    }
    return m;
}

void mostra_vetor(int *v, int n)
{
    int i;
    printf("\nMostra vetor\n");
    for(i=0;i<n;i++)
    {
        printf("\n%d\t",*v);
        v++;
    }
}

void multiplica_escalar(int *v1, int *v2, int x, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        *v2=*v1 * x;
        v1++;
        v2++;
    }
}
