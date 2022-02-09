#include<stdio.h>
#include<stdlib.h>
void Ler(int *a, int n){
 int i;
 for(i=0; i<n; i++) {
 printf("v[%i]: ",i+1);
 scanf("%d",&a[i]);
 }
}
int main() {
    int *v, n, i;
    printf("Digite a qtde de elementos: ");
    scanf("%d",&n);
    v = (int *) malloc(n*sizeof(int));
    Ler(v,n);
    for(i=0; i<n; i++)
    printf("%d\n",v[i]);
    return 0;
}
