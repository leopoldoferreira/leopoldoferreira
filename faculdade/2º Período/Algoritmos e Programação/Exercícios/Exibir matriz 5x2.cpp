//For (coluna)
//Printf "\n"
//For linha
//Printf "\t matriz[c][l]
#include<stdio.h>
int main ()
{
   int l,c,opc;
   float mat[5][2];
   for(l=0;l<5;l++)
   {
        for(c=0;c<2;c++)
    printf("Digite o numero da conta [%d][%d]:\n",l+1,c++);
    scanf("%f%f",&mat[l],&mat[c]);
   }
   for(c=0;c<2;c++)
   {
       printf("\n");
    for(l=0;l<5;l++)
            printf("\t%.2f%.2f",mat[l][c]);
   }



}
