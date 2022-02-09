#include<stdio.h>
#include<string.h>
#include<math.h>
#include"pontos.h"
int main (){
 float result;
 struct pontos p;
 printf("Digite os pontos (x1,y1) e (x2,y2) : ");
 scanf("%f%f%f%f",&p.x1,&p.y1,&p.x2,&p.y2);
 result = sqrt(pow(p.x1-p.x2,2)+pow(p.y1-p.y2,2));
 printf("\n");
 printf("Resultado: %.2f",result);
 printf("\n");


return 0;
}
