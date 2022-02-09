#include<stdio.h>
#include<math.h>
int main()
{
    int num,cont,auxiliar,somap=0,somai=0;
    for (cont=1;cont<=15;cont=cont+1)
    {
        printf("Digite 15 numeros inteiros e positivos:\n");
        scanf("%d",&num);
        auxiliar=num%2;
        if (auxiliar==0)
            somap=somap+num;
        else
            somai=somai+num;

    }
        printf("\nSoma dos numeros impares: %d\n",somai);
        printf("\nSoma dos numeros pares: %d\n",somap);
 return 0;
}
