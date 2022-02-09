#include<stdio.h>
#include<stdlib.h>
struct lista{
int conteudo;
struct lista *proximo
};
typedef struct lista celula;
celula c; //conte�do da c�lula
celula *p; // endere�o da c�lula
// p->conteudo conteudo da c�lula
// p->endere�o da pr�xima c�lula
// se p = endere�o ultima c�lula da lista ent�o p->prox=null;
//lista com cabe�a, 1� c�lula � irrelevante, sem cabe�a � relevante
celula c, *inicio;
c->proximo = NULL; //lista com cabe�a  ini->prox==null <-> a lista est� vazia
inicio = &c;
//ou alocar primeira c�lula dinamicamente
celula *inicio;
inicio = malloc(sizeof(celula));
inicio->proximo = NULL;
//lista sem cabe�a, conte�do da primeira � relevante, s� � vazia
// se o endere�o da primeira for NULL, para criar:
celula *inicio;
inicio == NULL;
// como imprimir COM e SEM Cabe�a:
// Imprime o conte�do de uma lista encadeada
// com cabe�a. O endere�o da primeira c�lula � inicio.

void imprima( celula *inicio) {
   celula *p;
   for (p = ini->prox; p != NULL; p = p->prox)
      printf( "%d\n", p->conteudo);
}
// Imprime o conte�do de uma lista encadeada inicio.
// A lista n�o tem cabe�a.

void imprima( celula *inicio) {
   celula *p;
   for (p = ini; p != NULL; p = p->prox)
      printf( "%d\n", p->conteudo);
}
// Esta fun��o recebe um inteiro x e uma lista
// encadeada ini de inteiros, com celula-cabe�a.
// A fun��o devolve o endere�o de uma celula que
// cont�m x ou devolve NULL se tal celula n�o
// existe.

celula *busca( int x, celula *ini)
{
   celula *p;
   p = ini->prox;
   while (p != NULL && p->conteudo != x)
      p = p->prox;
   return p;
}
//vers�o recursiva
celula *buscaR( int x, celula *ini)
{
   if (ini->prox == NULL)
      return NULL;
   if (ini->prox->conteudo == x)
      return ini->prox;
   return buscaR( x, ini->prox);
}
