#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct lista{
    int dado;
    lista *prox;
    lista *ant;
}Lista;

Lista lista;

Lista* insere(Lista *li)
{
    Lista *p = (Lista*)malloc(sizeof(Lista));
    int info;
    printf("Digite um numero a ser inserido: ");
    scanf("%d",&info);
    if(li==NULL){
    p->dado = info;
    p->ant = NULL;
    p->prox = li;
    }
    else{
    p->dado = info;
    p->ant = NULL;
    p->prox = li;
    li->ant = p;
    }
    return p;
}

Lista *retira(Lista *li)
{
    Lista *aux = (Lista*)malloc(sizeof(Lista));
    aux = li;
    aux = aux->prox;
    free(li);
    aux->ant = NULL;
    printf("Primeiro dado removido com sucesso!\n");

    return aux;
}

void imprime(Lista *li)
{
        Lista *p;
        for(p = li;p != NULL; p = p->prox)
        printf("Dado: %d\n",p->dado);
}

int main()
{
    int op;
    Lista *li = NULL;
    do{
    printf("\n\t\t\t\t  MENU \n\n");
    printf("\t\t1 - Inserir um elemento no inicio da lista\n");
    printf("\t\t2 - Remover o elemento do inicio lista\n");
    printf("\t\t3 - Imprimir a lista\n");
    printf("Digite uma opcao: ");
    scanf("%d",&op);
    switch(op){
case 1:
    li = insere(li);
    system("cls");
    break;
case 2:
    li = retira(li);
    system("pause");
    system("cls");
    break;
case 3:
    imprime(li);
    system("pause");
    system("cls");
    break;
    default:
        printf("Opcao Invalida");
        system("cls");
    }
    }while(op!=4);
}
