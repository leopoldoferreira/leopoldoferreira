#include<stdio.h>
int main()
{
    int mat[3][2],matt[2][3],l,c;
    for(l=0;l<3;l++)
    {
        for(c=0;c<2;c++)
        {
        printf("Digite o numero da matriz posicao [%d][%d]",l+1,c+1);
        scanf("%d",&mat[l][c]);
        }
    }
        for(l=0;l<3;l++)
    {
        printf("\n");
        for(c=0;c<2;c++)
        {
        printf("\t%d",mat[l][c]);
        }
    }
    printf("\n");
    printf("Matriz Transposta");
    for(l=0;l<2;l++)
    {
        for(c=0;c<3;c++)
        {
            matt[l][c]=mat[c][l];
        }
    }

        for(l=0;l<2;l++)
    {

        printf("\n");
        for(c=0;c<3;c++)
        {
        printf("\t%d",matt[l][c]);
        }
    }

return 0;
}
