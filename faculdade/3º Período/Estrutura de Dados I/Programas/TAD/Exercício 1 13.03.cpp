#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
int num,cep;
char rua[100],complemento[100],bairro[100],cidade[100],estado[100],pais[50];

}enderec;
typedef struct{
char nome[40],email[40],observacao[150],data[8];
int ddd,tel;

enderec b;

}agenda;
int main()
{
    agenda a;
    int i=0;
    int sair,cont=0;
    do{
    // NOME
    printf("Digite o nome:");
    scanf("%s",&a.nome);
    // E-MAIL
    printf("Digite o email:");
    scanf("%s",&a.email);
    // ENDEREÇO
    printf("Digite os dados do endereco.\nRua:");
    scanf("%s",&a.b.rua);
    printf("Numero:");
    scanf("%d",&a.b.num);
    printf("Complemento:");
    scanf("%s",&a.b.complemento);
    printf("Bairro:");
    scanf("%s",&a.b.bairro);
    printf("CEP:");
    scanf("%d",&a.b.cep);
    printf("Cidade:");
    scanf("%s",&a.b.cidade);
    printf("Estado:");
    scanf("%s",&a.b.estado);
    printf("Pais:");
    scanf("%s",&a.b.pais);
    // TELEFONE
    printf("Telefone\n");
    printf("DDD:");
    scanf("%d",&a.ddd);
    printf("Numero:");
    scanf("%d",&a.tel);
    // DATA DE ANIVERSARIO
    printf("Data de aniversário:");
    scanf("%s",&a.data);
    // OBSERVAÇÃO
    printf("Observacao:");
    scanf("%s",&a.observacao);
    // SAIDA
    printf("Digite 1 para continuar ou 2 para sair e imprimir:");
    scanf("%d",&sair);
    printf("\n");
    i++;
    }
    while((sair==1)&&(i<100));

    do{
    printf("\t\t---Contato [%d]---",i);
    printf("\nNome:%s",&a.nome);
    printf("\nEmail:%s",&a.email);printf("Telefone\nDDD:");
    printf("\nRua:%s",&a.b.rua);
    printf("\nNumero:%d",&a.b.num);
    printf("\nComplemento:%s",&a.b.complemento);
    printf("\nBairro:%s",&a.b.bairro);
    printf("\nCEP:%d",&a.b.cep);
    printf("\nCidade:%s",&a.b.cidade);
    printf("\nEstado:%d",&a.b.estado);
    printf("\nPais:%s",&a.b.pais);
    printf("\nTelefone\nDDD:%d",&a.ddd);
    printf("\nNumero:%d",&a.tel);
    printf("\nData de aniversario:%s",&a.data);
    printf("\nObservacao:%s\n",&a.observacao);
    cont++;
    }while(cont<i);


    return 0;
    }
