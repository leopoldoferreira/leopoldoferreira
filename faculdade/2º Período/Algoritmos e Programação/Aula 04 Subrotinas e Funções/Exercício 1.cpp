#include<stdio.h>
int num(int a)
{
    if(a>=0)
        a=1;
    else
        a=0;
return a;
}
int main()
{
    int n;
    printf("Digite um numero: ");
    scanf("%d",&n);
    printf("%d",num(n));

return 0;
}
