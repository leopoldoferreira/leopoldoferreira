#include<stdio.h>
#include<string.h>
int main()
{
    char str[150],str2[150];
    int cont=0,x;
    printf("Digite a frase:");
    gets(str);
    for(x=0;x<strlen(str);x++){
    str[x]=str2[x];
    for(x=0;x<strlen(str);x--)
    printf("%c",str2[x]);
    }
    printf("\n");

}
