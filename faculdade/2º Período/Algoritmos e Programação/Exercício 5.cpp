#include<stdio.h>
int main ()
{
   int l,c,opc;
   float mat[5][2];
   for(l=0;l<5;l++)
   {
    for(c=0;c<2;c++)
    {
    printf("Digite o numero da conta e o saldo :",l+1,c+1);
    scanf("%f",&mat[l][c]);
    }
   }
   for(l=0;l<5;l++)
   {

       printf("\n");
    for(c=0;c<2;c++)
            printf("\t%.2f",mat[l][c]);
   }


return 0;
}
