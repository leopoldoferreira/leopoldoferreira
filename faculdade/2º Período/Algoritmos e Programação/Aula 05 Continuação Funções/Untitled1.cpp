#include <stdio.h>

int soma(int n1,int n2)
{
    int i=n1,x=0;
    if(n1>n2){
    for(i=n1;i<=n2;i++){
    if(i%2!=0)
        x++;
    }}
    return printf("%d\n",x);
}

int main()
{
    int x,y;
    printf("Digite dois numeros:");
    scanf("%d%d",&x,&y);
    printf("qnt de umeros impares entre %d e %d sao:",x,y);
    soma(x,y);
    return 0;
}
