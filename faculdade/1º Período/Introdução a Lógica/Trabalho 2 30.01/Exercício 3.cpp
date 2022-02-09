#include<stdio.h>
int main ()
{
    int i,codcidade=0,cidade,media=0,veiculos,somav=0,maior=0,acidentes,somaa=0,x;
    for (i=0;i<6;i++)
    {
    printf("Digite o codigo da cidade o numero de veiculos \ne o numero de acidentes com vitimas:\n");
    scanf("%d%d%d",&cidade,&veiculos,&acidentes);


    if (cidade<0)
        printf("Invalido");
    if (veiculos<0)
        printf("Invalido");
    if (acidentes<0)
        printf("Invalido");

    if (acidentes>maior)
    {
        maior=acidentes;
        codcidade=cidade;
    }
    if (media!=veiculos)
    {
    media=veiculos;
    codcidade=cidade;
    }
    if (veiculos < 2000)
    {
    somaa=somaa+acidentes;
    x = x + 1;
    }
    somav=somav+veiculos;
    }
    printf("O maior indice de acidentes foi %d na cidade %d\n",maior,codcidade);
    printf("Media dos veiculos das cidades juntas: %d\n",somav/6);
    printf("Media de acidentes de transito em cidades com menos de 2000 automoveis: %d\n",(somaa/x));

    return 0;
}
