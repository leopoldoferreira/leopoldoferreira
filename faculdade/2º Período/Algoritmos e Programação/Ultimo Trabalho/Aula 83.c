#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *file;
    file=fopen("D:\\Usu�rios\\Desktop\\teste.txt", "r");

    if(file==NULL){
        printf("Arquivo n�o encontrado\n");
        getchar();//pra ver o que aconteceu.
        exit(0); //mata o programa.
    }
    char frase[100];
    while(fgets(frase,100,file)!=NULL){
        printf("%s", frase);
    }
    // nao pode ser: fgets(frase,100,file);
    //printf("%s", frase); porque vai ler s� at� o enter(quebra de linha).
    //fgets l� qualquer coisa e interpreta como string
    fclose(file);

    printf("\n");
    system("pause");
    return 0;
}
