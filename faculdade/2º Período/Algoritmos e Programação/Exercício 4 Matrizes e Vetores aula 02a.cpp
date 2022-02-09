#include<stdio.h>
int main()
{
    int mat[5][3],l,c,cont;
        for(cont=0;cont<5;cont++)
        {
            printf("Digite o codigo do aluno [%d]:",cont+1);
            scanf("%d",&mat[0][cont]);
            printf("Digite a nota do primeiro semestre do aluno [%d]:",cont+1);
            scanf("%d",&mat[1][cont]);
            printf("Digite a nota do segundo semestre do aluno [%d]:",cont+1);
            scanf("%d",&mat[2][cont]);
        }
        for(l=0;l<5;l++)
        {
            printf("\n");
            for(c=0;c<3;c++)
            {
                printf("\t%d",mat[l][c]);
            }
        }
}
