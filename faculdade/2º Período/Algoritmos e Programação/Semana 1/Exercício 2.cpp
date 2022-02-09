#include<stdio.h>
int main ()
{
    int mat[2][4],l,c,aux=0,contl1=0,contl2=0;
    float contp=0,cont=0;
    for(l=0;l<2;l++){
        for(c=0;c<4;c++){
    printf("Digite o numero da matriz posicao [%d][%d]:",l+1,c+1);
    scanf("%d",&mat[l][c]);
    if(mat[l][c]%2==0){
        contp=contp+mat[l][c];
        cont=cont+1;}
    }}
    for(c=0;c<4;c++){
     if(12<mat[0][c]&&mat[0][c]<20)
        contl1=contl1+1;
     if(12<mat[1][c]&&mat[1][c]<20)
        contl2=contl2+1;
    }
        printf("\nQuatidade de elementro entre 12 e 20 na linha 1: %d\n",contl1);
        printf("\nQuatidade de elementro entre 12 e 20 na linha 2: %d\n",contl2);
        printf("\nMedia de elementos pares da matriz eh: %.2f\n",contp/cont);
}
