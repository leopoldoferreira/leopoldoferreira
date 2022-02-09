#include<stdio.h>
int main ()
{
    int fh;
    float cs;
    for (fh=40;fh<=80;fh++)
    {
        cs=5.0/9.0*(fh-32);
        printf("Farenheit: %.2d | Celsius: %.2f\n",fh,cs);
    }
    return 0;
}
