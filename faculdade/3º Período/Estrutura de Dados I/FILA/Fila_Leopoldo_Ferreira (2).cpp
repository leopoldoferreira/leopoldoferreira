#include<stdio.h>
#include<stdlib.h>
#define N 100
typedef struct{
    int quant,ini;
    float vet[N];
}Fila;

Fila *Cria_Fila(){ // fun��o de tipo Fila que � apontada pelo ponteiro Cria_Fila que possuir�(apontar�) as informa��es da estrutura Fila e retorna Fila
    Fila *a = (Fila*) malloc(sizeof(Fila));// aloca
    a->quant = 0; //inicia
    a->ini = 0;
    return a;
}

Fila *Insere_Fila(Fila *qualquer,float n){ // fun��o de tipo Fila que... que recebe por par�metro a Fila por um ponteiro de nome qualquer, e um n�mero tipo float para inserir.
    int aux;
    if(qualquer->quant==N) // se a quantidade for igual ao tamanho, n�o continua o programa.(condi��o de parada)
    {
	printf("Nao ha mais espaco na fila.\n");
	}
	else{
    aux = (qualquer->ini+qualquer->quant)%N; // c�lculo que permite se a fila estiver cheia, voltar a ser inserido na posi��o 0.
    qualquer->vet[aux] = n;//posi��o onde o numero(n) ser� encaixado na fila;
	qualquer->quant ++;//contador
}}

float Remove_Fila(Fila *ponteiroqueapontandoestrutura){ //fun��o float porque retornar� um float, pega a fila por par�metro.
    float qualnumerofoiremovido;
    if(ponteiroqueapontandoestrutura->quant==0)
	{
	printf("Nao ha elementos na lista.\n");// condi��o se a estrutura estiver vazia
	}
	else{
    qualnumerofoiremovido = ponteiroqueapontandoestrutura->vet[ponteiroqueapontandoestrutura->ini]; // uma variavel recebe qual n�mero foi removido pegando onde est� o in�cio.
	ponteiroqueapontandoestrutura->ini = (ponteiroqueapontandoestrutura->ini+1)%N; // permite mover o ponteiro inicial corretamente, caso chegue em 100, volte pra 0;
	ponteiroqueapontandoestrutura->quant--; //contador para remover uma quantidade, pois foi removida.
	printf("Numero %.2f foi removido.\n",qualnumerofoiremovido);
	}
}

void Exibir_Fila(Fila *f){ //s� printa, ent�o n�o retorna nada(void), pega a fila por par�metro ponteiro.
    int i; //contador
    if(f->quant==0){
        printf("Nao ha elementos na lista.\n");
    }
    for( i=0; i< f->quant; i++)
    { //imprima a o vetor da posi��o inicial + i modulo de 0 at� a quantidade de elementos que o usu�rio digitou, progressivamente(++);
	printf("%.2f  ",f->vet[(f->ini+i)%N]);
    }

}

int main(){
    system("color 0B");
    Fila *aFila = Cria_Fila(); //cria a fila no main
    int op;
    do{
    printf("\t\tMenu\n");
    printf("1. Insere Elemento.\n");
    printf("2.Remove Elemento\n");
    printf("3.Exibe Elemento\n");
    printf("4.Sair\n");
    scanf("%d",&op);

    switch(op){
case 1:
    float num;
    printf("Digite o numero a ser inserido: ");
    scanf("%f",&num);
    Insere_Fila(aFila,num);
    system("pause");
    system("cls");
    break;
case 2:
    Remove_Fila(aFila);
    printf("\n");
    system("pause");
    system("cls");
    break;
case 3:
	Exibir_Fila(aFila);
	printf("\n");
    system("pause");
    system("cls");
    break;

    }
    }while(op!=4);
}
