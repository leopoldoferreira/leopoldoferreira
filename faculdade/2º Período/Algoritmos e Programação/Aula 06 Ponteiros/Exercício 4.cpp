#include<stdio.h>
int main()
{
    float vet[3];
    float *pvet;
    int i;
    pvet=vet;
    vet[0]=1;
    vet[1]=2;
    vet[3]=3;
        for(i=0;i<3;i++){
    printf("%d\n",&vet[i]);
    printf("%d\n",pvet);
    }
}
