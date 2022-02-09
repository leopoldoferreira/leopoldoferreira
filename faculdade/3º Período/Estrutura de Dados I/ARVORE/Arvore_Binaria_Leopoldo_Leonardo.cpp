#include<stdio.h>
#include<stdlib.h>

typedef struct noArvore{
    int elemento;
    noArvore *FilhoEsq;
    noArvore *FilhoDir;
    noArvore *pai;
}noArvore;

noArvore *Cria_Arvore(){
    noArvore *raiz = (noArvore*)malloc(sizeof(noArvore));
    if(raiz!=NULL)
        raiz = NULL;
    return raiz;
}

noArvore* insere_noArvore(noArvore *raiz,int valor){
    noArvore *novo;
    novo = (noArvore*)malloc(sizeof(noArvore));
    if(raiz == NULL){
        raiz->elemento = valor;
        raiz->FilhoDir = NULL;
        raiz->FilhoEsq = NULL;
    }
    if(valor == raiz->elemento){
    free(novo);
    printf("Elemento ja existe.");
    }else
     if(raiz->elemento < valor)
       raiz->FilhoDir = insere_noArvore(raiz->FilhoDir,valor);
    else
       raiz->FilhoEsq = insere_noArvore(raiz->FilhoEsq,valor);
}

bool busca_noArvore(noArvore *raiz,int valor){
    if(raiz == NULL){
        printf("Arvore Vazia");
    }

    while(raiz->elemento != NULL){
          if(raiz->elemento == valor){
                return true;
          }
    if(valor > raiz->elemento){
        raiz = insere_noArvore(raiz->FilhoDir,valor);
    }
    else
        raiz = insere_noArvore(raiz->FilhoEsq,valor);
    }
}

void Mostrar_emOrdem(noArvore *raiz){
  if(raiz == NULL)
        printf("Arvore Vazia");
    if(raiz !=NULL){
    Mostrar_emOrdem(raiz->FilhoEsq);
    printf("%d\n",raiz->elemento);
    Mostrar_emOrdem(raiz->FilhoEsq);
    }
}

void Mostrar_preOrdem(noArvore *raiz){
  if(raiz == NULL)
        printf("Arvore Vazia");
    if(raiz !=NULL){
    printf("%d\n",raiz->elemento);
    Mostrar_preOrdem(raiz->FilhoEsq);
    Mostrar_preOrdem(raiz->FilhoEsq);
    }
}
void Mostrar_posOrdem(noArvore *raiz){
    if(raiz == NULL)
        printf("Arvore Vazia");
    if(raiz !=NULL){
    Mostrar_posOrdem(raiz->FilhoEsq);
    Mostrar_posOrdem(raiz->FilhoEsq);
    printf("%d\n",raiz->elemento);
    }
}

int main(){

    noArvore *raiz = Cria_Arvore();

    int op,x,y;

    do{
    //MENU
    printf("      MENU\n");
    printf("1.Inserir Elemento\n");
    printf("2.Buscar Elemento\n");
    printf("3.Mostrar em Ordem\n");
    printf("4.Mostrar pre Ordem\n");
    printf("5.Mostrar pos Ordem\n");
    printf("6.Sair\n");
    scanf("%d",&op);
    switch(op){
case 1:
    {
    printf("Digite o elemento a ser inserido:");
    scanf("%d",&x);
    insere_noArvore(raiz,x);
    system("pause");
    system("cls");
    }break;
case 2:
    {
    printf("Digite o elemento a ser buscado:");
    scanf("%d",&y);
    bool ret = busca_noArvore(raiz,y);
    if(ret == true)
        printf("Elemento existe");
    else
        printf("Elemento não encontrado");
    system("pause");
    system("cls");
    }break;
case 3:
    Mostrar_emOrdem(raiz);
    system("pause");
    system("cls");
    break;
case 4:
    Mostrar_preOrdem(raiz);
    system("pause");
    system("cls");
    break;
case 5:
    Mostrar_posOrdem(raiz);
    system("pause");
    system("cls");
    break;

    }}while(op!=6);
}
