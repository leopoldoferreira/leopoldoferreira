#include<stdio.h>
int main()
{
    float idade;
    printf("Digite a idade do competidor: ");
    scanf("%f",&idade);
    if ((idade>=5) && (idade<=7))
    {
        printf("Categoria INFANTIL A");
    }
    else
    {
        if ((idade>=8) && (idade<=10))
        {
            printf("Categoria Infantil B");
        }
        else
        {
            if ((idade>=11) && (idade<=13))
            {
                printf("Categoria Juvenil A");
            }
            else
            {
                if ((idade>=14) && (idade<=17))
                {
                    printf("Categoria Juvenil B");
                }
                else
                {
                    if (idade>=18)
                    {
                        printf("Categoria Senior");
                    }
                    else
                    {

                    }
                }
            }
        }
    }

return 0;
}
