#include<stdio.h>
int main()
{
int l,c,mat[10][10],soma=0;
    for (l=0;l<10;l++){
    for (c=0;c<10;c++){
        printf("Digite a matriz posicao [%d][%d]:",l+1,c+1);
        scanf("%d",&mat[l][c]);
    }}
    //exibindo para ter certeza
    for (l=0;l<10;l++){
        printf("\n");
    for (c=0;c<10;c++){
        printf("\t%d",mat[l][c]);
    }}
    printf("\n\n\n");
    for (l=0;l<10;l++){
        for(c=0;c<10;c++){
            if(c==l)
                printf("\t %d",mat[l][c]);

    }}
    for (l=0;l<10;l++){
        soma=soma+mat[l][l];
    }
    printf("\n");
    printf("Media dos valores da diagonal principal eh %d.\n\n",soma/10);

}
