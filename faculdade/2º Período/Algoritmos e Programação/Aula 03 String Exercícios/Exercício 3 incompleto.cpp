#include<stdio.h>
#include<string.h>
int main()
{
    int x;
    char str1[999],str2[999];
    printf("Digite uma palavra:");
    gets(str1);
    for(x=0;x<strlen(str1);x++)
    if(str1[x]==' '){{
    strcpy(str2,str1);
    strcat(str2,str1);
    printf("\n%s \n",str2);
    if(strcmp(str)==0)
    }}

    return 0;
}
