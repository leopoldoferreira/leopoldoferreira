#include<stdio.h>
int main()
{
    int a,b,c,d;
    int *e,*f,*g,*h;
    e=&a;
    f=&b;
    g=&c;
    h=&d;
    printf("digite o valor de A:");
    scanf("%d",&*e);
    *f=2;
    *h=4;
    printf("digite o valor de C:");
    scanf("%d",&*g);
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    printf("%d\n",d);
    printf("%p\n",e);
    printf("%d\n",f);
    printf("%d\n",g);
    printf("%p\n",h);
    return 0;
}
