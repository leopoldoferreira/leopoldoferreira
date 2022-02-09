#include <stdio.h>
#include<string.h>
char *substituivogal(char *palavra);

int main(){
char frase[100];
strcpy(frase,"por favor, substitua as vogais desta frase");

printf("%s\n", substituivogal((char *)frase));

getchar();
return 0;
}

char *substituivogal(char *palavra){
int i,j;
char array_vogais[] = {'a','e','i','o','u'};
for(i=0;i < strlen(palavra); i++){
for(j=0;j<5;j++){
if(tolower(*(palavra+i))== array_vogais[j] ){
*(palavra+i) = '*';
}
}
}
return palavra;
}
