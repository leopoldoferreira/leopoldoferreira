#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<time.h>
/* NA HORA DE MOSTRAR AS RESERVAS, NÃO SEI O QUE ACONTECE
QUE MEU PROGRAMA ESTA PEGANDO A PROXIMA POSIÇÃO E ATRIBUINDO
UM VALOR DE MEMORIA NELA, O QUE FAZ ELA IMPRIMIR, NÃO CONSEGUI
IDENTIFICAR O PROBLEMA */
typedef struct
{
    int numerovoo,assentototal;
}aviao;
aviao a[5];

typedef struct
{
    int fazerreserva;
    char nome[40];
}reserva;

reserva r[160];
void criaraviao(){

    int i;
    for(i=0;i<5;i++){
        if (a[i].numerovoo==0){
        printf("Digite o numero do voo:");
        scanf("%d",&a[i].numerovoo);
        printf("Digite o numero total de assentos:");
        scanf("%d",&a[i].assentototal);
        if(i==5 || a[5].numerovoo!=0){
            printf("Numero de avioes maximo cadastrados\n");
        }
        i=5;
        }}

    system("pause");
}

void mostraraviao(){
    int i;
    for(i=0;i<5;i++)
    if(a[i].numerovoo!=0){
    printf("Aviao %d cadatrado com %d assentos.\n",a[i].numerovoo,a[i].assentototal);
    }
    printf("\n");
    system("pause");


}

void criarreserva()
{
    int i;
    printf("Selecione o voo:\n");
    for(i=0;i<5;i++){
    if(a[i].numerovoo!=0){
    printf("Aviao %d disponivel.\n",a[i].numerovoo);
    printf("Digite o numero do voo que quer fazer a reserva:");
    scanf("%d",&r[i].fazerreserva);
    }
    i=5;
    }
    for(i=0;i<160;i++){
    printf("Digite o nome do passageiro:");
    scanf("%s",&r[i].nome[40]);
    i=160;
    }
    printf("Reserva criada com sucesso!\n");


    system("pause");
        system("cls");

}

void mostrarreserva()
{
    int i;
    for(i=0;i<160;i++){
    if(r[i].fazerreserva!=0){
    printf("Reserva do voo %d em nome de: %s\n",r[i].fazerreserva,&r[i].nome[40]);
    }}

    system("pause");
    system("cls");

}
int main ()
{
    int escolha;
    while(escolha!=5){
    printf("Digite a opcao desejada: \n1.Criar Aviao 2.Mostrar Aviao 3.Criar Reserva 4.Mostrar Reserva 5.Sair\n");
    scanf("%d",&escolha);
    switch(escolha){
    case 1:
        criaraviao();
        system("cls");
        break;
    case 2:
        mostraraviao();
        printf("\n");
        system("cls");
        break;
    case 3:
        criarreserva();
        break;
    case 4:
        mostrarreserva();
        break;
    case 5:
        printf("Programa finalizado\n");
        return 0;
        system("cls");
        break;
    default:
        printf("Digite uma opcao valida.\n\n");
        system("pause");
        system("cls");

    break;
    }}

}
