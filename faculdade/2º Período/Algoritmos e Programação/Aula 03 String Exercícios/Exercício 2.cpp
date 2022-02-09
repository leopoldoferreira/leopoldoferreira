#include<stdio.h>
#include<string.h>
int main()
{
    int x,y;
    char frase[]="Vamos ver se da certo\nQUE BOM, MEU PROGRAMA RODOU CORRETAMENTE";
    puts(frase);
    char aux[]={'a','e','i','o','u','A','E','I','O','U'};
    for(x=0;x<strlen(frase);x++)
        for(y=0;y<10;y++){
    if(frase[x]==aux[y])
    frase[x]='*';
    }
    printf("\n%s\n",frase);

    return 0;
}
