#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct lista2 {
 int info;
 struct lista2* ant;
 struct lista2* prox;
};
typedef struct lista2 Lista2;

Lista2* lst2_insere (Lista2* lst, int val)
{
 Lista2* novo = (Lista2*) malloc(sizeof(Lista2));
 novo->info = val;
 novo->prox = lst;
 novo->ant = NULL;
 /* verifica se lista não estava vazia */
 if (lst != NULL)
 lst->ant = novo;
 return novo;
}
/* função busca: busca um elemento na lista */
Lista2* lst2_busca (Lista2* lst, int val)
{
 Lista2* p;
 for (p=lst; p!=NULL; p=p->prox)
 if (p->info == val)
 return p;
 return NULL; /* não achou o elemento */
}
/* função retira: remove elemento da lista */
Lista2* lst2_retira (Lista2* lst, int val)
{
 Lista2* p = busca(lst,val);
 if (p == NULL)
 return lst;/* não achou o elemento: retorna lista inalterada */
 /* retira elemento do encadeamento */
 if (lst == p) /* testa se é o primeiro elemento */
 lst = p->prox;
 else
 p->ant->prox = p->prox;
 if (p->prox != NULL) /* testa se é o último elemento */
 p->prox->ant = p->ant;
 free(p);
 return lst;
}
void lst_imprime (Elemento* lst)
{
 Elemento* p;
 for (p = lst; p != NULL; p = p->prox)
 printf("info = %d\n", p->info);
}


int main(){
    Elemento* lst;
    lst = lst_cria();
    lst = lst_insere(lst, 23);
    lst = lst_insere(lst, 33);
    lst_imprime(lst);

}

