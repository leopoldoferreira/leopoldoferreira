#include<stdio.h>
#include<string.h>
int main()
{
    char str[150];
    int cont=0,x;
    printf("Digite a frase:");
    gets(str);
    for(x=0;x<strlen(str);x++){
    if(str[x]==' ')
    printf("\n");
    printf("%c",str[x]);
    }
    printf("\n");

}
