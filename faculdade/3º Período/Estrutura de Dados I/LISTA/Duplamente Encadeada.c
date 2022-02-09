#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

typedef struct lista{
    int dados;
    lista *ant;
    lista *prox;
}Lista;

Lista elemento;

Lista *cria_lista(){

    return NULL;
}

Lista *insere_lista_inicio(Lista *li, int info)
{
    Lista *no =(Lista*) malloc(sizeof(Lista));
    no->dados = info;
    no->prox = li;
    no->ant = NULL;
    li->ant = no;
    return no;
}

Lista *remove_lista_inicio(Lista* li)
{
    Lista *aux;
    aux = li;
    aux = aux->prox;
    free(li);
    aux->ant=NULL;
    return aux;
}

Lista *imprime(Lista* li)
{
    Lista *p;
    for(p=li;p!=NULL;p=p->prox){
        printf("Dado: %d",p->dados);
    }
}


void menu()
{
     printf("\n\t\t\t\t  MENU \n\n");
     printf("\t\t1 - Inserir um elemento no inicio da lista\n");
     printf("\t\t2 - Remover o elemento do inicio lista\n");
     printf("\t\t3 - Imprimir a lista\n");

}

int main()
{
    int opcao;
    int dado;

    menu();
    Lista *li;

    li = cria_lista();

    printf("Escolha uma das opcoes: ");
    scanf("%d", &opcao);

    while(opcao != 4){
        switch(opcao){
            case 1:
                printf("\nDigite um caracetere: ");
                scanf("%d",&dado);
                li = insere_lista_inicio(li,dado);
                system("cls");
                break;
            case 2:
                li = remove_lista_inicio(li);
                system("cls");
                break;
            case 3:
                imprime(li);
                system("cls");
                break;
            default:
                printf("\nOpcao invalida!\n\n");
                getch();
                system("cls");

                break;
        }
        menu();
        printf("Escolha uma das opcoes: ");
        scanf("%d", &opcao);
    }

    getch();

    return 0;
}


/*int main()
{
    li=crialista();
    if(lista_vazia(li)
        printf("Lista Vazia");
    int x = insere_lista_inicio(li,info);
    int x = remove_lista_inicio(li);

}
*/
