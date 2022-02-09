#include<stdio.h>
int main()
{
    int i=0,num=7;
    printf("\t\tTABUADA DO 7\t\t\n\n");
    while(i<=10)
    {
         printf("\t%02d\t *\t %02d \t= \t%02d\n", num,i,num*i);
         i=i+1;
    }
}
