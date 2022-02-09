#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<math.h>

typedef struct noArvore{
    int elemento;
    int alt;
    noArvore *FilhoEsq;
    noArvore *FilhoDir;
    noArvore *pai;
}NoArvore;

noArvore* Cria_Arvore(){
    return NULL;
}
int alt_no(NoArvore *raiz){
    if(raiz == NULL)
        return -1;
    else
        return raiz->alt;
}
int Fator_Balanceamento(NoArvore *raiz){
    return labs(alt_no(raiz->FilhoEsq) - alt_no(raiz->FilhoDir));
}
int maior(int x, int y){
    if(x > y)
        return x;
    else
        return y;
}
void RotacaoLL(NoArvore *raiz){
    NoArvore *no;
    no = raiz->FilhoEsq;
    raiz->FilhoEsq = no->FilhoDir;
    no->FilhoDir = raiz;

    raiz->alt = maior(alt_no(raiz->FilhoEsq),alt_no(raiz->FilhoDir))+1;
    no->alt = maior(alt_no(no->FilhoEsq),raiz->alt)+1;

    raiz = no;

}

void RotacaoRR(NoArvore *raiz){
    NoArvore *no;
    no = raiz->FilhoDir;
    raiz->FilhoDir = no->FilhoEsq;
    no->FilhoEsq = raiz;

    raiz->alt = maior(alt_no(raiz->FilhoEsq),alt_no(raiz->FilhoDir))+1;
    no->alt = maior(alt_no(no->FilhoDir),raiz->alt)+1;

    raiz = no;
}
void RotacaoLR(NoArvore *raiz){
    RotacaoRR(raiz->FilhoEsq);
    RotacaoLL(raiz);
}
void RotacaoRL(NoArvore *raiz){
    RotacaoLL(raiz->FilhoDir);
    RotacaoRR(raiz);
}

NoArvore* insere_noArvore(NoArvore *raiz,int valor){

    if(raiz == NULL){
        NoArvore *raiz;

        raiz = (NoArvore*)malloc(sizeof(NoArvore));

        raiz->elemento = valor;
        raiz->alt = 0;
        raiz->FilhoEsq = NULL;
        raiz->FilhoDir = NULL;
        return raiz;
    }

    if(valor == raiz->elemento){
        printf("Elemento ja existe.");
    }

    NoArvore *atual = raiz;

    if(valor<atual->elemento){
            atual->FilhoEsq = insere_noArvore(atual->FilhoEsq,valor);
            if(Fator_Balanceamento(atual)>=2){
                if(valor < atual->FilhoEsq->elemento){
                    RotacaoLL(raiz);
                }else{
                    RotacaoLR(raiz);
                }
            }

    return raiz;
    }
    else{
        if(valor > atual->elemento){
                raiz->FilhoEsq = insere_noArvore(raiz->FilhoEsq,valor);
                if(Fator_Balanceamento(atual)>=2){
                    if(raiz->FilhoDir->elemento < valor){
                        RotacaoRR(raiz);
                    }else{
                        RotacaoLR(raiz);
                    }
                }

        }
        return raiz;
    }
    atual->alt = maior(alt_no(atual->FilhoEsq),alt_no(atual->FilhoDir))+1;

    return raiz;
}

NoArvore* busca_noArvore(NoArvore *raizz, int valor)
{
    if(raizz==NULL)
    {
        std::cout<<"\nElemento Nao Encontrado Ou Arvore Vazia\n\n";
        return NULL;
    }

    if(raizz != NULL){
    if(raizz->elemento == valor)
    {
        printf("Elemento existe \n");
    }
    else if(valor > raizz->elemento)
    {
        raizz = busca_noArvore(raizz->FilhoDir,valor);
    }
    else //if(valor < raizz->elemento)
        raizz = busca_noArvore(raizz->FilhoEsq,valor);
}
}

void Mostrar_emOrdem(NoArvore *raiz){
    if(raiz!=NULL){
    Mostrar_emOrdem(raiz->FilhoEsq);
    printf("%d\n",raiz->elemento);
    Mostrar_emOrdem(raiz->FilhoDir);
    }
}

void Mostrar_preOrdem(NoArvore *raiz){
    if(raiz !=NULL){
    printf("%d\n",raiz->elemento);
    Mostrar_preOrdem(raiz->FilhoEsq);
    Mostrar_preOrdem(raiz->FilhoDir);
    }
}
void Mostrar_posOrdem(NoArvore *raiz){
    if(raiz !=NULL){
    Mostrar_posOrdem(raiz->FilhoEsq);
    Mostrar_posOrdem(raiz->FilhoDir);
    printf("%d\n",raiz->elemento);
    }
}

int main(){

    NoArvore *raiz = Cria_Arvore();

    int op;
    int x = 0;
    int y = 0;

    do{
    //MENU
    printf("      MENU\n");
    printf("1.Inserir Elemento\n");
    printf("2.Buscar Elemento\n");
    printf("3.Mostrar em Ordem\n");
    printf("4.Mostrar pre Ordem\n");
    printf("5.Mostrar pos Ordem\n");
    printf("6.Sair\n");
    std::cin >> op;
    switch(op){
case 1:
    {
    printf("Digite o elemento a ser inserido:");
    scanf("%d",&x);
    raiz = insere_noArvore(raiz,x);
    system("pause");
    system("cls");
    }break;
case 2:

    printf("Digite o elemento a ser buscado:");
    scanf("%d",&y);
    busca_noArvore(raiz,y);
    system("pause");
    system("cls");
    break;

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
