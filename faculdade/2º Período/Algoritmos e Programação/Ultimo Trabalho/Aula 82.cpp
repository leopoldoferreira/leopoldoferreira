#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c;
    FILE *file;
    file=fopen("D:\\Usu�rios\\Desktop\\teste.txt", "r+");
    // se o ponteiro n�o for executado  /\(esse arquivo n�o existir)
    // o ponteiro � nulo.
    if(file==NULL){
        printf("Arquivo n�o encontrado\n");
        system("pause");
        return 0;
    }
    fscanf(file,"%i%i%i",&a,&b,&c);//fun��o limitada, espera exatamente
    // o que ta escrito dentro do arquivo
    //fcanf lida com entrada de dados tratados

    printf("%i %i %i",a,b,c);
    fclose(file);

    return 0;
}
