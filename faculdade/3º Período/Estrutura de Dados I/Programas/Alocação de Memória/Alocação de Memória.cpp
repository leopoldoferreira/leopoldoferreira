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
    // A função malloc(memory allocation) reserva, aloca, essa quantidade de bytes porque existem programas como lista
    // onde não se sabe quanta memória precisa ser alocada.
    // A função retorna o ponteiro que aponta para o endereço desse bloco que foi alocado
    // O argumento da função malloc nesse caso como é um vetor de int indefinido,
    // multiplica-se a quantidade de numeros que será digitado por um byte de tipo inteiro
    //(int *) é um CASTING forçando o ponteiro que era VOID, se tornar INT.
    p=(int *)malloc(qnt*sizeof(int));
    Ler(p,qnt);
    printf("Quantidade de bytes alocados: %d",qnt*sizeof(p)); //Printando quantidade de bytes alocados
    printf("\nOs %d numeros armazenados sao:\n",qnt);
    for(i=0; i<qnt; i++)
    printf("%d\n",p[i]);
    return 0;

}
