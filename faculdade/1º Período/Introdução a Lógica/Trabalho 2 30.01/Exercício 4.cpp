#include <stdio.h>
int main ()
{
    int n,i=1,fat=1;
    printf("Digite N:\n");
    scanf("%d",&n);
    do
    fat=fat*i++;
    while (i<=n);
    printf("%d! eh: %d\n",n,fat);
    return 0;
}
