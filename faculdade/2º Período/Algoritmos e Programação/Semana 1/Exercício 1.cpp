#include<stdio.h>
int main ()
{
    int mat[3][5],l,c,cont=0;
    for(l=0;l<3;l++){
        for(c=0;c<5;c++){
    printf("Digite o numero da matriz posicao [%d][%d]:",l+1,c+1);
    scanf("%d",&mat[l][c]);
    if(15<mat[l][c]&&mat[l][c]<20)
    cont=cont+1;
    }}
        printf("\nForam lidos %d elementos entre 15 e 20.\n",cont);
}
