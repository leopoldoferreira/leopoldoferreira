#include<stdio.h>


int main()
{
    char sex,sexh;
    float h,maiorh=0,menorh=100,mediahfem=0;
    int i,qtdm=0,media=0;

    for(i=1;i<=3;i++)
    {
        printf("\nPessoa %d\n",i);
        printf("Digite o sexo: M ou F.\n");
        fflush(stdin);
        scanf("%c",&sex);
        printf("Digite a altura: \n");
        scanf("%f",&h);
        if (h>maiorh)
        {
            maiorh=h;
            sexh=sex;
        }
        if (h<menorh)
            menorh = h;
        if (sex=='f') || (sex == 'F'))
        {
            mediahfem=mediahfem+h;
            media=media+1;
        }
        if (sex=='m') || (sex == 'M'))
            qtdm++;

    }

    printf("\nA maior altura eh %.2f\nA menor eh %.2f\n", maiorh, menorh);
    if ((sexh == 'm'))
        printf("e a maior pessoa eh do sexo masculino.\n");
    else
        printf("A maior pessoa eh do sexo: feminino\n");
    printf("A media da altura feminina eh %.2f\n", (mediahfem/media));
    printf("A qnt de homens foi %d\n", qtdm);



    return 0;

}
