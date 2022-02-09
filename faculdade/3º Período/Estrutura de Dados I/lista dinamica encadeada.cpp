#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct Tipo_Lista{
    int cod;
    struct Tipo_Lista *Prox;
};
struct Tipo_Lista *Primeiro;
struct Tipo_Lista *Ultimo;

void FLVazia(){
    struct Tipo_Lista *aux;
    aux = (struct Tipo_Lista*)malloc(sizeof(struct Tipo_Lista));
    Primeiro = aux;
    Ultimo = Primeiro;
}
int Insere(int x){
    struct Tipo_Lista *aux;
    aux = (struct Tipo_Lista*)malloc(sizeof(struct Tipo_Lista));
    aux->cod = x;
    Ultimo->cod = x;
    Ultimo = Ultimo->Prox;
    aux->Prox = NULL;
}
int Imprime(){
    struct Tipo_Lista *aux;
    aux = Primeiro->Prox;
    while(aux != NULL){
        printf("Item = %d",aux->cod);
        aux = aux->Prox;
    }
}
int Pesquisa(int x){
    struct Tipo_Lista *aux;
    int flag=0;
    aux = Primeiro->Prox;
    while(aux != NULL){
        if(aux->cod == x){
            printf("Achou item %d",x);
            flag = 1;
            aux = NULL;
        }
        else
            aux = aux->Prox;
    }
    if(flag==0)
        printf("Item %d Nao encontrado.",x);
}

int main(){
    char op = '2';
    int codigo;
    FLVazia();
    while(op != '0'){
        printf("Entre com o codigo: ");
        scanf("%d",&codigo);
        Insere(codigo);
        printf("Continua? 1=sim 0=nao.\n");
        op=getch();
    }
    Imprime();
    printf("\nEntre com um item para pesquisa: ");
    scanf("%d",&codigo);
    Pesquisa(codigo);
    getch();

}
