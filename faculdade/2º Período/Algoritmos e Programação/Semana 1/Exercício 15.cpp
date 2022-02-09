#include<stdio.h>
int main()
{
    int mat[5][5],vetl[5]={0,0,0,0,0},vetc[5]={0,0,0,0,0},l,c;

    for(l=0;l<5;l++){
        for(c=0;c<5;c++){
             printf("Digite os numeros da matriz posicao[%d][%d]:",l+1,c+1);
             scanf("%d",&mat[l][c]);
        }}
        for(l=0;l<5;l++){
        printf("\n");
        for(c=0;c<5;c++){
             printf("\t%d",mat[l][c]);
        }}
        printf("\n");
        for(l=0;l<5;l++){
            for(c=0;c<5;c++){
		vetl[l]=vetl[l]+mat[l][c];
        vetc[c]=vetc[c]+mat[l][c];
        }}
        for(c=0;c<5;c++){
                printf("\t\n%d\n",vetl[c]);}
                printf("\n");
        for(l=0;l<5;l++){
            printf("\t%d",vetc[l]);
        }
        printf("\n\n");
}
