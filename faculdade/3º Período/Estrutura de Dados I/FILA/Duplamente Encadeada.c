#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct elemento{
struct elemento *ant;
int dados;
struct elemento *prox;
};
typedef struct elemento* Lista;
typedef struct elemento Elem;

Lista* cria_lista(){
    Lista* li = (Lista*)malloc(sizeof(Lista));
    if(li != NULL)
        *li = NULL;
    return li;
}

int insere_lista_inicio(Lista* li,int info)
{
    if(li == NULL) return 0; //verificação
    Elem* no =(Elem*)malloc(sizeof(Elem));
    if(no == NULL) return 0;
    no->dados = info;
    no->prox = (*li);
    no->ant = NULL;
    //se a lista não estiver vazia
    if(*li != NULL)
        (*li)->ant = no;
    *li = no;
    return 1;
}

int remove_lista_inicio(Lista* li){
    if(li == NULL)
        return 0;
    if((*li) == NULL)
        return 0;
    Elem *no = *li;
    *li = no->prox;
    if(no->prox != NULL)
        no->prox->ant=NULL;
    free(no);
    return 1;
}
/* void lst_imprime (Elemento* lst)
{
 Elemento* p;
 for (p = lst; p != NULL; p = p->prox)
 printf(“info = %d\n”, p->info);
}
*/
void imprime(Lista* li){
    struct elemento* p;
	if(li == NULL){
		printf("\nLista Vazia");
	}
	else
	{
		while(li!=NULL)
		{
			printf("\nElemento: %d\n",p->dados);
			p = p->prox;
		}
	}
}


void menu(){
     printf("\n\t\t\t\t  MENU \n\n");
     printf("\t\t1 - Inserir um elemento no inicio da lista\n");
     printf("\t\t2 - Remover o elemento do inicio lista\n");
     printf("\t\t3 - Imprimir a lista\n");

}

int main(){
    int opcao;
    int dado;
    menu();
    Lista *li;
    li = cria_lista();
    printf("Escolha uma das opcoes: ");
    scanf("%d", &opcao);
    while(opcao != 4){
        switch(opcao){
            case 1:
                printf("\nDigite um caracetere: ");
                scanf("%d",&dado);
                int x = insere_lista_inicio(li,dado);
                system("cls");
                break;
            case 2:
                remove_lista_inicio(li);
                system("cls");
                break;
            case 3:
                imprime(li);
                system("cls");
                break;
            default:
                printf("\nOpcao invalida!\n\n");
                getch();
                system("cls");

                break;
        }
        menu();
        printf("Escolha uma das opcoes: ");
        scanf("%d", &opcao);
    }

    getch();

    return 0;
}


/*int main()
{
    li=crialista();
    if(lista_vazia(li)
        printf("Lista Vazia");
    int x = insere_lista_inicio(li,info);
    int x = remove_lista_inicio(li);

}
*/
