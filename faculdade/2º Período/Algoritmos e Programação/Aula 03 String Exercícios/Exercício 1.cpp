#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int cont=0,x;
    printf("Digite a frase:");
    gets(str);
    for(x=0;x<100;x++)
    if(str[x]==' ')
    cont+=1;
    if(cont==0)
    printf("\nFoi escrita uma palavra\n");
    else
    printf("\nForam escritas %d palavras.\n",cont+1);

    return 0;
}
