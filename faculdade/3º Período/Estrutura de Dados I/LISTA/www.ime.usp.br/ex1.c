#include<stdio.h>
#include<stdlib.h>
struct lista{
int conteudo;
struct lista *proximo
};
typedef struct lista celula;
celula c; //conteúdo da célula
celula *p; // endereço da célula
// p->conteudo conteudo da célula
// p->endereço da próxima célula
// se p = endereço ultima célula da lista entáo p->prox=null;
//lista com cabeça, 1ª célula é irrelevante, sem cabeça é relevante
celula c, *inicio;
c->proximo = NULL; //lista com cabeça  ini->prox==null <-> a lista está vazia
inicio = &c;
//ou alocar primeira célula dinamicamente
celula *inicio;
inicio = malloc(sizeof(celula));
inicio->proximo = NULL;
//lista sem cabeça, conteúdo da primeira é relevante, só é vazia
// se o endereço da primeira for NULL, para criar:
celula *inicio;
inicio == NULL;
// como imprimir COM e SEM Cabeça:
// Imprime o conteúdo de uma lista encadeada
// com cabeça. O endereço da primeira célula é inicio.

void imprima( celula *inicio) {
   celula *p;
   for (p = ini->prox; p != NULL; p = p->prox)
      printf( "%d\n", p->conteudo);
}
// Imprime o conteúdo de uma lista encadeada inicio.
// A lista não tem cabeça.

void imprima( celula *inicio) {
   celula *p;
   for (p = ini; p != NULL; p = p->prox)
      printf( "%d\n", p->conteudo);
}
// Esta função recebe um inteiro x e uma lista
// encadeada ini de inteiros, com celula-cabeça.
// A função devolve o endereço de uma celula que
// contém x ou devolve NULL se tal celula não
// existe.

celula *busca( int x, celula *ini)
{
   celula *p;
   p = ini->prox;
   while (p != NULL && p->conteudo != x)
      p = p->prox;
   return p;
}
//versão recursiva
celula *buscaR( int x, celula *ini)
{
   if (ini->prox == NULL)
      return NULL;
   if (ini->prox->conteudo == x)
      return ini->prox;
   return buscaR( x, ini->prox);
}
