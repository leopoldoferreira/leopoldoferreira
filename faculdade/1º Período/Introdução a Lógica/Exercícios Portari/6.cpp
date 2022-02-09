#include<stdio.h>
int main()

{
    float nota1,nota2,nota3,nota4,media;
    printf("Digite as 4 notas do aluno: ");
    scanf("%f %f %f %f",&nota1,&nota2,&nota3,&nota4);
    media=((nota1+nota2)+(nota3+nota4))/4;
    if((media>=0) && (media<2.5))
    {
        printf("Conceito E\n");
    }
    else
    {
        if((media>=2.5) && (media<5))
        {
            printf("Conceito D\n");
        }
        else
        {
            if((media>=5) && (media<7))
            {
                printf("Conceito C\n");
            }
            else
            {
                if((media>=7) && (media<8.5))
                {
                    printf("Conceito B\n");
                }
                else
                {
                    if((media>=8.5) && (media<=10))
                    {
                        printf("Conceito A\n
                               ");
                    }
                    else
                    {
                        if(media>10)
                        {
                            printf("Invalido pois a media maxima eh 10\n");
                        }
                        else
                        {

                        }
                    }
                }
            }
        }
    }
return 0;
}
