#include<stdio.h>
#include<stdlib.h>
typedef struct no{
    float info;
    struct no *anterior;
    struct no *prox;
}no;
typedef struct{
    no *topo;
}Pilha;


void cria_pilha(Pilha *p){
    p = NULL;
}

int pilha_vazia(Pilha *p){
    return (p==NULL);
}

int push(Pilha *p,no info){
    Pilha novo;
    novo = (no*)malloc(sizeof(no));
    if(novo == null) return 0;
    novo->info = valor;
    novo->prox = *p;
    *p = novo;
    return 1;
}

int pop(Pilha *p,no valor){
    Pilha = aux;
    if(pilha_vazia(*p)) return 0;
    aux = *p;
    *valor = (*p)->dado;
    *p = aux->prox;
    free(aux);
    return 1;
}

int main{
    Pilha *aPilha = cria_pilha();
    int op;
    do{
        printf("Menu");
        printf("1.Inserir um elemento no topo\n2.Remover um elemento no topo\n3.Verificar se a pilha está vazia\n4.Liberar a estrutura pilha");
        scanf("%d",&op);
        switch(op){
    case 1:
        printf("Digite o elemento que deseja inserir");
        scanf("%f",aPilha->info);
        push(aPilha,info);
        system("pause");
        system("cls");
        break;
    case 2:
        pop(aPilha,info);
        system("pause");
        system("cls");
        break;
    case 3:
        pilha_vazia(aPilha);
        system("pause");
        system("cls");
        break;
    case 4:
        return 0;
        system("pause");
        system("cls");
        break;
        }




    }
}
