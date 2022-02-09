#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *file;
    file=fopen("teste.txt", "a");//attach/append

    if(file==NULL){
        printf("Arquivo não encontrado\n");
        getchar();//pra ver o que aconteceu.
        exit(0); //mata o programa.
    }
    fprintf(file,"Vamos das as maos\n");

    char frase[] ="Sei la qualquer coisa \n";
    fputs(frase, file);

    char caractere='3';
    fputc(caractere, file);


    fclose(file);
    return 0;
}
