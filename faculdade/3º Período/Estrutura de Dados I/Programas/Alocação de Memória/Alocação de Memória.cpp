#include<stdio.h>
#include<stdlib.h>
void Ler(int *a, int n){
 int i;
 for(i=0; i<n; i++) {
 printf("Numero[%i]: ",i+1);
 scanf("%d",&a[i]);
}
}
int main(){
    int qnt,i,*p;
    printf("Digite a quantidade de numeros que deseja alocar:");
    scanf("%d",&qnt);
    // O operador sizeof serve para retornar a quantidade de bytes de qualquer tipo de dado
    // A fun��o malloc(memory allocation) reserva, aloca, essa quantidade de bytes porque existem programas como lista
    // onde n�o se sabe quanta mem�ria precisa ser alocada.
    // A fun��o retorna o ponteiro que aponta para o endere�o desse bloco que foi alocado
    // O argumento da fun��o malloc nesse caso como � um vetor de int indefinido,
    // multiplica-se a quantidade de numeros que ser� digitado por um byte de tipo inteiro
    //(int *) � um CASTING for�ando o ponteiro que era VOID, se tornar INT.
    p=(int *)malloc(qnt*sizeof(int));
    Ler(p,qnt);
    printf("Quantidade de bytes alocados: %d",qnt*sizeof(p)); //Printando quantidade de bytes alocados
    printf("\nOs %d numeros armazenados sao:\n",qnt);
    for(i=0; i<qnt; i++)
    printf("%d\n",p[i]);
    return 0;

}
