#include<stdio.h>
int main ()
{
    float mat[3][3],aux;
    int l,c,num;
    printf("Digite o numero desejado para a multiplicao:");
    scanf("%d",&num);
    for(l=0;l<3;l++){
        for(c=0;c<3;c++){
    printf("Digite o numero da matriz posicao [%d][%d]:",l+1,c+1);
    scanf("%f",&mat[l][c]);
    }}
        for(l=0;l<3;l++){
        printf("\n");
        for(c=0;c<3;c++){
        printf("\t%.1f",mat[l][c]*num);
    }}
}
