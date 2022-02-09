#include<stdio.h>
int fib(int n);
int main()
{
    int num;
    printf("Digite um numero: \n");
    scanf("%d",&num);
    printf("O valor do numero na sequencia fibbonacci eh: %d\n",fib(num));
    return 0;
}
int fib(int n)
{
    if(n==1)
        return 1;
    else
    if(n==2)
        return 2;
    else
        return fib(n-1)+fib(n-2);
}
