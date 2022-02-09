#include<stdio.h>
int main ()
{
    int mat[2][3],l,c,cont=0;
    for(l=0;l<2;l++){
        for(c=0;c<3;c++){
    printf("Digite o numero da matriz posicao [%d][%d]:",l+1,c+1);
    scanf("%d",&mat[l][c]);
    if(mat[l][c]<5||mat[l][c]>15)
    cont=cont+1;
    }}
            printf("\n Foram lidos %d elementos que nao pertencem ao intervalo 5 e 15.\n",cont);
}
