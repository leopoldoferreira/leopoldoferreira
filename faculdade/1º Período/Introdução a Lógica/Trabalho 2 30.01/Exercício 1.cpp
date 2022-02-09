#include<stdio.h>
#include<math.h>
int main ()
{
    int i,x,y,ch;
    do
    {
        printf("Digite x e y:");
        scanf("%d%d",&x,&y);
        if (x<=0)
        {
            printf("Invalido");
        }
        else
            if (y<=0)
            {
                printf("Invalido");
            }
        else
        printf("%d elevado a %d eh: %.1f\n",x,y,pow(x, y));
        printf("\nDigite 1 para reiniciar: \n");
        scanf("%c",&ch);
        ch=getchar();
    }
    while(ch=='1');
 return 0;
}
