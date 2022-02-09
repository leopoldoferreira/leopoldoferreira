#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c;
    FILE *file;
    file=fopen("D:\\Usuários\\Desktop\\teste.txt", "r+");
    // se o ponteiro não for executado  /\(esse arquivo não existir)
    // o ponteiro é nulo.
    if(file==NULL){
        printf("Arquivo não encontrado\n");
        system("pause");
        return 0;
    }
    fscanf(file,"%i%i%i",&a,&b,&c);//função limitada, espera exatamente
    // o que ta escrito dentro do arquivo
    //fcanf lida com entrada de dados tratados

    printf("%i %i %i",a,b,c);
    fclose(file);

    return 0;
}
