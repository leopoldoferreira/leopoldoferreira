 /**************************************************/
/*  Autor: Felipe Andrade                         */
/*                                                */
/*  araujoandrade.flp@gmail.com                   */
/*                                                */
/*  Data: 19/09/12 11:15                          */
/*                                                */
/*  Descri��o: Lista duplamente encadeada         */
/*                                                */
/**************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct noLista{ /* estrutura duplamente auto-referenciada */

       char valor;

       struct noLista *anterior, *proximo;

};

typedef struct noLista NOLISTA; /* defini��o do tipo NOLISTA a partir do tipo 'struct noLista' */
typedef NOLISTA *NOLISTAPTR; /* defini��o do tipo *NOLISTAPTR a partir do tipo NOLISTA */

/* insere um n� no in�cio da lista */
void insere_no_inicio(NOLISTAPTR *inicio, char valor){

     NOLISTAPTR novo;

     novo = (NOLISTAPTR) malloc(sizeof(NOLISTA)); /* aloca mem�ria para o novo n� */

     if(novo == NULL) /* se n�o houver mem�ria dispon�vel */
         return;      /* sai da fun��o */

     if(*inicio == NULL){    /* se a lista estivava vazia */
         novo->valor = valor; /* insere o valor no novo n� */
         novo->proximo = novo->anterior = NULL; /* n�o h� pr�ximo n� nem n� anterior, pois s� h� um n� */
         *inicio = novo; /* o novo n� � o primeiro da lista */
     }
     else{   /* se j� havia n� na lista */
         novo->valor = valor; /* insere o valor no novo n� */
         novo->anterior = NULL; /* n�o h� n� anterior */
         novo->proximo = *inicio; /* o novo n� aponta para o que est� no in�cio */
         (*inicio)->anterior = novo; /* o n� atual do in�cio aponta para o novo n� */
         *inicio = novo; /* o novo n� passa a ser o primeiro da lista */
     }
}

/* insere um valor no final da lista */
void insere_no_final(NOLISTAPTR *inicio, char valor){

     NOLISTAPTR novo, atual;

     novo=(NOLISTA*)malloc(sizeof(NOLISTA));

     if(novo == NULL)
         return;

     if(*inicio == NULL){
         novo->valor = valor;
         novo->proximo = novo->anterior = NULL;
         *inicio = novo;
     }
     else{
         atual = *inicio; /* atual aponta para o in�cio */
         while(atual->proximo != NULL) /* enquanto o n� atual n�o for o �ltimo */
             atual = atual->proximo;    /* vai para o n� seguinte */

         novo->valor = valor;
         novo->anterior = atual;  /*o n� anterior ao novo � o n� atual */
         novo->proximo = NULL; /* n�o h� pr�ximo n�, pois o novo ser� o �ltimo */
         atual->proximo = novo; /* o n� atual aponta para o novo n� e n�o � mais o �ltimo */
     }
}

/* remove um n� escolhido pelo usu�rio */
int retira(NOLISTAPTR *inicio, char valor){

    NOLISTAPTR temporario, atual;

    if(*inicio == NULL)
        return 0; /* retorna 0 caso a lista esteja vazia */

    atual = *inicio; /* o n� atual � o do in�cio */

    if((*inicio)->valor == valor) /* caso o no a ser retirado seja o do inicio */
        *inicio = (*inicio)->proximo; /* o n� inicial passa a ser o pr�ximo da lista */

    while(atual != NULL && atual->valor != valor) /*se h� n� e o valor do mesmo n�o � o valor que se quer retirar*/
        atual = atual->proximo; /*passa para o pr�ximo*/

    if(atual == NULL)
        return 0; /* retorna 0 se n�o encontrou o valor */
    /* caso tenha encontrado */
    else{
        temporario = atual; /* temporario aponta para o n� encontrado */

        if(atual->anterior != NULL)/* caso haja um n� anterior ao enontrado*/
            atual->anterior->proximo = atual->proximo; /* faz o n� anterior apontar para o n� posterior ao encontrado */

        if(atual->proximo != NULL) /* caso haja um n� posterior ao enontrado*/
            atual->proximo->anterior = atual->anterior; /* faz o n� posterior apontar para o n� anterior ao encontrado */

        free(temporario);/* remove o n� encontrado */
    }

    return 1;
}

/* deleta um n� apartir do in�cio da lista */
char elimina_no(NOLISTAPTR *inicio){

    NOLISTAPTR temporario;
    char c;

    temporario = *inicio; /* n� do in�cio passa a ser tempor�rio */
    c = (*inicio)->valor; /* pega o valor que estava no n� */
    *inicio = (*inicio)->proximo; /* o n� seguinte passa a ser o do in�cio */
    free(temporario); /* deleta o n� tempor�rio */

    return c;
}

int esta_vazia(NOLISTAPTR lista){

    return lista == NULL;

}

void imprime_lista_ordem_direta(NOLISTAPTR lista){

     if(esta_vazia(lista))
         printf("\n\nA lista esta vazia.\n\n");
     else{
         printf("\nA lista eh:\n\n");
         while(lista != NULL){
             printf(" %c", lista->valor);
             lista = lista->proximo;
         }
     }
}

void imprime_lista_ordem_inversa(NOLISTAPTR lista){

     if(esta_vazia(lista))
         printf("\n\nA lista esta vazia.\n\n");
     else{
         while(lista->proximo != NULL) /* enquanto n�o chegar no �ltimo n� ...*/
             lista = lista->proximo;   /* ... percorre a lista */

         printf("\nA lista eh:\n\n");
         while(lista != NULL){
             printf(" %c", lista->valor);
             lista = lista->anterior;
         }

     }
}

void menu(){

     printf("     <------> OPERACOES BASICAS EM UMA LISTA DUPLAMENTE ENCADEADA <------>\n\n");
     printf("\n\n\t\t\t\t  OPCOES\n\n");
     printf("\t\t1 - Inserir um elemento no inicio da lista\n");
     printf("\t\t2 - Inserir um elemento no final da lista\n");
     printf("\t\t3 - Remover um elemento da lista\n");
     printf("\t\t4 - Imprimir a lista na ordem direta\n");
     printf("\t\t5 - Imprimir a lista na ordem inversa\n");
     printf("\t\t6 - sair\n\n");

}

int main(){

    NOLISTAPTR lista = NULL;
    int opcao;
    char valor;

    menu();
    printf("Escolha uma das opcoes: ");
    scanf("%d", &opcao);

    while(opcao != 6){

        switch(opcao){

            case 1:
                 printf("\nDigite um caracetere: ");
                 scanf("\n%C", &valor);
                 insere_no_inicio(&lista, valor);
                 system("cls");
                 break;

            case 2:
                 printf("\nDigite um caracetere: ");
                 scanf("\n%C", &valor);
                 insere_no_final(&lista, valor);
                 system("cls");
                 break;

            case 3:
                 printf("\nDigite o valor a ser retirado: ");
                 scanf("\n%c", &valor);
                 if(! retira(&lista, valor)){
                     printf("\nNo inexistente!\n\n");
                     getch();
                 }
                 system("cls");
                 break;

            case 4:
                 imprime_lista_ordem_direta(lista);
                 getch();
                 system("cls");
                 break;

            case 5:
                 imprime_lista_ordem_inversa(lista);
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
    while(! esta_vazia(lista)){ /* retira todos os n�s n�o apagados para liberar a mem�ria */
        printf("No %c retirado\n", elimina_no(&lista));
    }
    printf("\nLista vazia\n");

    getch();

    return 0;
}





