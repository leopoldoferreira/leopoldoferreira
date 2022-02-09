#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int n,op;
    srand (time(NULL));
    n=1+rand()%3;
    printf("-- PEDRA PAPEL TESOURA --\n Escolha: 1.Pedra 2.Papel 3.Tesoura 4.Sair:\n");
    scanf("%d",&op);
    switch(op){
    case 1:
        printf("Voce Escolheu Pedra e a Maquina:\n");
        if(n==1)
        printf("Pedra, portanto: Empate.\n");
        if(n==2)
        printf("Papel, portanto: Perdeu\n");
        if(n==3)
        printf("Tesoura, portanto: Venceu\n");

        system("pause");
        system("cls");
        return main();
        break;
    case 2:
        printf("Voce Escolheu Papel e a Maquina:\n");
        if(n==2)
        printf("Papel, portanto: Empate\n");
        if(n==1)
        printf("Pedra, portanto: Venceu\n");
        if(n==3)
        printf("Tesoura, portanto: Perdeu\n");

        system("pause");
        system("cls");
        return main();
        break;
    case 3:
        printf("Voce Escolheu Tesoura e a Maquina:\n");
        if(n==3)
        printf("Tesoura, portanto: Empate\n");
        if(n==2)
        printf("Papel, portanto: Venceu\n");
        if(n==1)
        printf("Pedra, portanto: Perdeu\n");

        system("pause");
        system("cls");
        return main();
        break;
    default:
        system("pause");
        system("cls");
        break;


    }





}
