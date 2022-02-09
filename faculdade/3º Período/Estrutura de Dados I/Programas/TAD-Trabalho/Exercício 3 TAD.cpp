#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct{
    char aluno[50],matricula[10],nome[50];
    float nota1,nota2,nota3,media;
}alunos[5];
alunos a;
void result();
int main(){
    char nome1[50],nome2[50],nome3[50];
    int i,cont=0,aux;
    float maior1,menor1,media1,maior;
    for(i=0;i<5;i++){
    printf("Digite o numero da matricula [%d]:",i+1);
    scanf("%s",&a[i].matricula);
    printf("Digite o nome do aluno [%d]:",i+1);
    scanf("%s",&a[i].aluno);
    printf("Digite a nota da primeira prova:");
    scanf("%f",&a[i].nota1);
    printf("Digite a nota da segunda prova:");
    scanf("%f",&a[i].nota2);
    printf("Digite a nota da terceira prova:");
    scanf("%f",&a[i].nota3);
    if(a[i].nota1>maior){
    maior=a[i].nota1;
    strcpy(nome3,a[i].aluno);
    }
    a[i].media=(a[i].nota1+a[i].nota2+a[i].nota3)/3;

    if(a[i].media>maior1){
    maior1=a[i].media;
    strcpy(nome1,a[i].aluno);
    }
    if(i==0)
    menor1=a[i].media;
    if(a[i].media<menor1){
    menor1=a[i].media;
    strcpy(nome2,a[i].aluno);
    }
    system("cls");
    }
    printf("Maior nota da primeira prova: %.2f do aluno %s\n",maior,nome3);
    printf("Maior media Geral: %.2f do aluno %s \n",maior1,nome1);
    printf("Menor media Geral: %.2f do aluno %s \n\n",menor1,nome2);
    result();
}
void result()
{
    int i;
    for(i=0;i<5;i++){
    if(a[i].media<6)
        printf("\tAluno [%d] %s Reprovado!\n",i+1,a[i].aluno);
    if(a[i].media>=6)
        printf("\tAluno [%d] %s Aprovado!\n",i+1,a[i].aluno);
    }
}
