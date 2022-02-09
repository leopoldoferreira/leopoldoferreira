#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct TIPO_LISTA {
 int informacao;
 struct TIPO_LISTA* anterior;
 struct TIPO_LISTA* proximo;
};
typedef struct TIPO_LISTA TIPO_LISTA;
typedef TIPO_LISTA *ponteiro;

TIPO_LISTA* Insere(TIPO_LISTA* lista, int valor){
    TIPO_LISTA* novo =(TIPO_LISTA*)malloc(sizeof(TIPO_LISTA));
    novo->informacao = valor;
    novo->proximo = lista;
    novo->anterior = NULL;
    // verifica se não está vazia:
    if (lista != NULL)
    lista->anterior = novo;
    return novo;
}
/*

Lista2* lst2_insere (Lista2* lst, int val)
{
 Lista2* novo = (Lista2*) malloc(sizeof(Lista2));
 novo->info = val;
 novo->prox = lst;
 novo->ant = NULL;
 /* verifica se lista não estava vazia
 if (lst != NULL)
 lst->ant = novo;
 return novo;
}
*/
void menu(){
     printf("\n\n\t\t\t\t  OPCOES\n\n");
     printf("\t\t1 - Inserir um elemento no inicio da lista\n");
     printf("\t\t2 - Remover o elemento do inicio lista\n");
     printf("\t\t3 - Imprimir a lista\n");
     printf("\t\t4 - Sair\n\n");
}
int main(){
    int opcao;
    char valor;
    menu();
    printf("Escolha uma das opcoes: ");
    scanf("%d", &opcao);
    while(opcao != 4){
        switch(opcao){
            case 1:

                 break;
            case 2:
                 printf("\nDigite o valor a ser retirado: ");
                 scanf("\n%c", &valor);
                 if(! retira(&lista, valor)){
                     printf("\nNo inexistente!\n\n");
                     getch();
                 }
                 system("cls");
                 break;
            case 3:
                 imprime_lista_ordem_direta(lista);
                 getch();
                 system("cls");
                 break;
            default:
                 printf("\nOpcao invalida!!!\n\n");
                 getch();
                 system("cls");
                 break;
        }
        menu();
        printf("Escolha uma das opcoes: ");
        scanf("%d", &opcao);
    }
    printf("\nLimpando lista ...\n\n");
    while(! esta_vazia(lista)){ /* retira todos os nós não apagados para liberar a memória */
        printf("No %c retirado\n", elimina_no(&lista));
    }
    printf("\nLista vazia\n");

    getch();

    return 0;
}

