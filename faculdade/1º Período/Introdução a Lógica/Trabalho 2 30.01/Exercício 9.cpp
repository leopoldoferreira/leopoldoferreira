#include<stdio.h>
int main()
{
    int i,num=0,aux;
    for(i=1;i<=10;i++)
    {
    printf("\n******************  \n");
    printf("\nT A B U A D A   %.2d\n",i);
    printf("\n******************  \n");
    num=num+1;
    for(aux=1;aux<=10;aux++)
    printf("\n%.2d   *   %.2d  =  %.2d\n", num,aux,num*aux);
    return 0;
    }
}
