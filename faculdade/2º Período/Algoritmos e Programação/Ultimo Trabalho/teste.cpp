#include<stdio.h>
int main()
{
    FILE *file; //variável especial aponta um ponteiro
    file=fopen("D:\\Usuários\\Desktop\\teste.txt","w"); //"teste.txt cria no diretorio do .cpp criado
    fprintf(file,"vamos dar as maos 1,2,3."); //printar no arquivo
    fclose(file); //salvar

    return 0;
}
