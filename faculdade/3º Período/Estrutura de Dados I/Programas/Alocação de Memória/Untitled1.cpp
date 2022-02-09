#include <stdio.h>
#include <stdlib.h>
int main()
{
int *a,b;
b=10;
printf("\nantes da alocacao:");
printf("\nvalor de a=%d",a);
printf("\nendereco de a=%p",a);
printf("\nvalor de b=%d",b);
printf("\nendereco de b=%p",&b);
a=(int *)malloc(sizeof(int));
printf("\ndepois da alocacao:");
printf("\nvalor de a=%d",*a);
printf("\nendereco de a=%p",a);
printf("\nvalor de b=%d",b);
printf("\nendereco de b= %p",&b);
*a=20;
printf("\ndepois de alocacao e atribuicao:");
printf("\nvalor de a=%d",*a);
printf("\nendereco de a=%p",a);
printf("\nvalor de b=%d",b);
printf("\nendereco de b=%p",&b);
a=&b;
printf("\ndepois da alocacao e apontar b:");
printf("\nvalor de a=%d",*a);
printf("\nendereco de a=%p",a);
printf("\nvalor de b=%d",b);
printf("\nendereco de b=%p",&b);
a=NULL;
free(a);
printf("\ndepois de liberar a memoria:");
//printf("\nvalor de a= %d",*a); //a nao existe mais, da erro
printf("\nendereco de a=%p",&a);
 printf("\nvalor de b=%d",b);
 printf("\nendereco de b= %p",&b);
 return 0;
}
