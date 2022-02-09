#include<stdio.h>
int main ()
{
    int mat[6][3],l,c,menor,maior,lmen,cmen,lmai,cmai;
    for(l=0;l<6;l++){
        for(c=0;c<3;c++){
    printf("Digite o numero da matriz posicao [%d][%d]:",l+1,c+1);
    scanf("%d",&mat[l][c]);
    }}
      for(l=0;l<6;l++){
        for(c=0;c<3;c++){
    if(mat[l][c]<menor){
        menor=mat[l][c];
        lmen=l+1;
        cmen=c+1;}
    }}
    maior=mat[l][c];
    for(l=0;l<6;l++){
        for(c=0;c<3;c++){
    if(mat[l][c]>maior){
        maior=mat[l][c];
        lmai=l+1;
        cmai=c+1;}

    }}
    printf("\n");
    printf("O maior numero eh:%d na posicao [%d][%d]\nO menor numero eh: %d na posicao [%d][%d]\n\n",maior,lmai,cmai,menor,lmen,cmen);

}
