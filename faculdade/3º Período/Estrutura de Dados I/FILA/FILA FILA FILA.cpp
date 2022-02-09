#include<stdio.h>
#include<stdlib.h>
#define TAM 3
typedef struct {
    int quant;
	int ini;
	float vetor[TAM];
} Fila;

Fila *CriaFila(){
	Fila *F =(Fila*) malloc(sizeof(Fila));
	   F->quant= 0;
   F->ini = 0;
   return F;
}


void InsereFila(Fila *f)

{
   int fim;
     if(f->quant ==TAM)
    {
	printf("Nao ha mais espaço para adicionar na fila.\n");
	}
	else{
    float num;
    printf("Digite o numero a ser inserido: ");
    scanf("%f",&num);

	fim = (f->ini+f->quant)%TAM ;
	f->vetor[fim] = num;
	f->quant ++;
	}
}

float RemoveFila (Fila *f)
{
	float v;
	if(f->quant==0)
	{
	printf("nao ha elementos na lista");
	}
	v = f-> vetor[f->ini];
	f->ini = (f->ini+1)%TAM;
	f->quant --;

	return v;
}

void ExibirFila(Fila *f)
{
	 int i;
for( i=0; i< f->quant; i++)
{
	printf("%.2f  ",f->vetor[(f->ini+i)%TAM]);
}
}
void menu(){
    printf("\t\tMenu\n");
    printf("1. Insere Elemento.\n");
    printf("2.Remove Elemento\n");
    printf("3.Exibe Elemento\n");
    printf("4.Sair\n");
}


int main()
{
    Fila *aFila = CriaFila();
    int op;
    float a;
    do{
    menu();
    scanf("%d",&op);
    switch(op){
case 1:
    InsereFila(aFila);
    system("pause");
    system("cls");
    break;
case 2:
    a = RemoveFila(aFila);
    printf("Numero %.2f foi removido.\n",a);
    system("pause");
    system("cls");
    break;
case 3:
	ExibirFila(aFila);
	printf("\n");
    system("pause");
    system("cls");
    break;

    }
    }while(op!=4);
}
