#include<stdio.h>
#include<stdlib.h>
struct lista{
int conteudo;
struct lista *prox
};
typedef struct lista celula;
celula c;
celula *p;
celula *inicio;
ini = NULL;
void imprima( celula *inicio) {
   celula *p;
   for (p = ini; p != NULL; p = p->prox)
      printf( "%d\n", p->conteudo);
}
int main()
{
    celula *inicio;
    scanf("%d",&inicio);
    imprima(inicio);

}

