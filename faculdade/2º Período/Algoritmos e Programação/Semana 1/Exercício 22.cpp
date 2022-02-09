#include<stdio.h>
int main()
{
    int mat[3][4],l,c,p,cont=0,soma=0;
    float media,n;
    for(l=0;l<3;l++){
        for(c=0;c<4;c++){
                n=n+1;
                printf("Digite os elementos da matriz posicao [%d][%d]:",l+1,c+1);
                scanf("%d",&mat[l][c]);
                media=media+mat[l][c];
                if(mat[l][c]%2==0)
                cont=cont+1;
                if(mat[l][c]%2!=0)
                soma=soma+mat[l][c];
                }}
                media=media/n;
                printf("\nQuatidade de elementos pares eh: %d\nSoma dos elementos impares eh: %d\nMedia de todos os elementos eh: %.2f",cont,soma,media);

}
