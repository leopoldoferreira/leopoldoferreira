#include<stdio.h>
int main()
{
int l,c,mat[5][5],soma=0;
    for (l=0;l<5;l++){
    for (c=0;c<5;c++){
        printf("Digite a matriz posicao [%d][%d]:",l+1,c+1);
        scanf("%d",&mat[l][c]);
    }}
    //exibindo para ter certeza
    for (l=0;l<5;l++){
        printf("\n");
    for (c=0;c<5;c++){
        printf("\t%d",mat[l][c]);
    }}
    printf("\n\n\n");
    for (l=0;l<5;l++){
        for(c=0;c<5;c++){
            if(c==(5-1-l))
                printf("\t %d",mat[l][c]);
    }}

    for(l=0;l<5;l++){
            soma=soma+mat[l][c];
    }
    printf("\n A média dos numeros da diagonal secundaria eh: %d\n\n",soma);

}
