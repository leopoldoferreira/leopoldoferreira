#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

typedef struct lista{
    int dados;
    lista *ant;
    lista *prox;
}Lista;

Lista lista;

Lista* cria_lista(){

    return NULL;
}

Lista *insere_lista_inicio(Lista *li)
{
    int info;
    cout<<"\nDigite um caracetere: ";
    cin >> info;

    Lista *primeiro = (Lista*) malloc(sizeof(Lista));
    primeiro->dados = info;
   // primeiro->prox = li;
    primeiro->ant = NULL;
    //li->ant = primeiro;
    return primeiro;
}

Lista *remove_lista_inicio(Lista *li)
{
    Lista *aux;
    aux = li;
    aux = aux->prox;
    free(li);
    aux->ant=NULL;
    return aux;
}

Lista *imprime(Lista *li)
{
    Lista *p;
    for(p = li;p != NULL;p = p->prox)
    {
        cout<< "\nDado: "<< p->dados;
    }
}


/*void menu()
{
     printf("\n\t\t\t\t  MENU \n\n");
     printf("\t\t1 - Inserir um elemento no inicio da lista\n");
     printf("\t\t2 - Remover o elemento do inicio lista\n");
     printf("\t\t3 - Imprimir a lista\n");
}
**/

int main()
{
    int opcao = 0;
   // int dado;

    //menu();
    Lista *li = cria_lista();

    do{

        cout<<"Escolha uma das opcoes: ";
        cin >> opcao;

        switch(opcao){

            case 1:
                li = insere_lista_inicio(li);
                system("cls");
                break;
            case 2:
                li = remove_lista_inicio(li);
                system("cls");
                break;
            case 3:
                imprime(li);
                system("cls");
                break;
            default:
               // printf("\nOpcao invalida!\n\n");
//                getch();
                system("cls");

                break;
        }
        }while(opcao != 4);

        //menu();
        //printf("Escolha uma das opcoes: ");
        //scanf("%d",&opcao);

    //getch();

    //return 0;
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
