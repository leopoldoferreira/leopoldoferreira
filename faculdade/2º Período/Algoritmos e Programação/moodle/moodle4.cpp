#include<stdio.h>
#include<math.h>
void calcula_hexagono(float l, float *area, float *perimetro);

int main()
{
   float lado,ar,per;
   printf("\nCalcula area e perimetro de um hexagono");
   printf("\n\nDigite o valor do lado: ");
   scanf("%f",&lado);
   calcula_hexagono(lado,&ar,&per);
   printf("\nO valor da area e %f\n e o valor do perimetro e %f",ar,per);
   return 0;
}

void calcula_hexagono(float l, float *area, float *perimetro)
{
    *area=(3*pow(l,2)*sqrt(3))/2;
    *perimetro=6*l;
}
