#include<stdio.h>

int inverte_vetor(int *v1, int *v2, int n);

void mostra_vetor(int *v, int n);

void multiplica_escalar(int *v1, int *v2, int x, int n);

int main()
{
   int n=10,x;
   int vet1[n],vet2[n],maior,cont;
   printf("\nLer e inverter um vetor e mostrar o maior\n\n");
   for(cont=0;cont<n;cont++)
   {
       printf("Digite o %d valor: ",cont+1);
       scanf("%d",&vet1[cont]);

void calcula_hexagono(float l, floar *area, float *perimetro);


Lembrando que a �rea e o per�metro de um hex�gono regular s�o dados por:



Por extenso para facilitar o entendimento da f�rmula:

A= (Tr�s * L ao quadrado * Raiz quadrada de 3 sobre 2)

P=�(6 vezes L)Exerc�cio de Fun��es e Ponteiro - Aula 01/11/14
Resolvam os exerc�cios de Ponteiros e Fun��es

1) Crie um programa para manipular vetores. O seu programa deve implementar uma fun��o chamada inverte_vetor, que recebe como par�metro dois vetores V1 e V2, ambos de tamanho N. A fun��o deve copiar os elementos de V1 para V2 na ordem inversa. Ou seja, se a fun��o receber V1 = {1,2,3,4,5}, a fun��o deve copiar os elementos para V2 na seguinte ordem: V2 = {5,4,3,2,1}. Al�m disso, a fun��o tamb�m deve retornar o maior valor encontrado em V1. A fun��o deve obedecer ao seguinte prot�tipo:
int inverte_vetor(int *v1, int *v2, int n);

2) Em seguida, implemente no mesmo modulo outra fun��o chamada
multiplica_escalar, que recebe como par�metro dois vetores V1 e V2 (ambos de tamanho N), e um n�mero inteiro X. A fun��o deve multiplicar cada um dos elementos de V1 por X e armazenar os resultados em V2.
A fun��o deve obedecer ao seguinte prot�tipo:
void multiplica_escalar(int *v1, int *v2, int x, int n);


3) Em seguida crie a fun��o principal do programa utilizando as fun��es inverte_vetor e multiplica_escalar para inverter um vetor de tamanho 10 fornecido pelo usu�rio e em seguida multiplicar esse vetor por um n�mero tamb�m fornecido pelo usu�rio. Por ultimo, o programa dever� exibir o vetor resultante V2.

4) Crie um programa para calcular a �rea e o per�metro de um hex�gono. O seu programa deve implementar uma fun��o chamada calcula_hexagono que calcule a �rea e o per�metro de um hex�gono regular de lado L. A fun��o deve obedecer o seguinte prot�tipo:

void calcula_hexagono(float l, floar *area, float *perimetro);


Lembrando que a �rea e o per�metro de um hex�gono regular s�o dados por:



Por extenso para facilitar o entendimento da f�rmula:

A= (Tr�s * L ao quadrado * Raiz quadrada de 3 sobre 2)

P=�(6 vezes L)


Para os c�lculos, obrigatoriamente voc


Para os c�lculos, obrigatoriamente voc� deve utilizar as fun��es sqrt e pow da biblioteca math.h.
   }
   maior=inverte_vetor(&vet1[0],&vet2[n-1],n);
   printf("\nO maior valor e %d",maior);

   mostra_vetor(vet1,n);
   mostra_vetor(vet2,n);

   printf("\nDigite um valor para multiplicar o vetor: ");
   scanf("%d",&x);
   multiplica_escalar(vet1,vet2,x,n);

    mostra_vetor(vet1,n);
   mostra_vetor(vet2,n);

   return 0;
}

int inverte_vetor(int *v1, int *v2, int n)
{
    int i,m;
    m=*v1;
    for(i=0;i<n;i++)
    {
       //v2[n-1-i]=*v1;
       *v2=*v1;
       if(m<*v1)
        m=*v1;
       v1++;
       v2--;

    }
    return m;
}

void mostra_vetor(int *v, int n)
{
    int i;
    printf("\nMostra vetor\n");
    for(i=0;i<n;i++)
    {
        printf("\n%d\t",*v);
        v++;
    }
}

void multiplica_escalar(int *v1, int *v2, int x, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        *v2=*v1 * x;
        v1++;
        v2++;
    }
}
