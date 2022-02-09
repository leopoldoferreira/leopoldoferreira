#include<stdio.h>
#include<stdlib.h>
#define N 100
struct Fila {
int n;
int ini;
float vet[N];
};

Fila* fila_cria(){
    Fila* f = (Fila*)malloc(sizeof(Fila));
    f->n = 0;
    f->ini = 0;
    return f;
}
void fila_insere(Fila* f){
    int fim;
    float v;
    printf("Digite o numero que deseja inserir");
    scanf("%f",&v);
    if(f->n == N){
        printf("Fila máxima\n");
        exit(1);
    }
    fim = (f->ini + f->n) % N;
    f->vet[fim] = v;
    f->n++;
    printf("Numero adicionado");
}
int fila_vazia(Fila* f){
    return (f->n==0);
}

float fila_retira(Fila* f){
    float v;
    if(fila_vazia(f)){
        printf("Fila Vazia\n");
        exit(1);
    }
    v = f->vet[f->ini];
    f->ini = (f->ini + 1) % N;
    f->n--;
    return v;
}
 int main(){
    Fila *f;
    int op;
    printf("\t\tMenu\n");
    printf("1.Insere Elemento na Fila\n");
    printf("2.Remove Elemento da Fila\n");
    printf("3.Sair\n");
    scanf("%d",&op);
    do{
    if(op==1){
        fila_insere(f);
    }
    }while(op!=3);

 }
