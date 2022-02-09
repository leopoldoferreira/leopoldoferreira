#include<stdio.h>
int main()
{
    float soma=0,contt=0;
    int idade[8]{0,0,0,0,0,0,0,0,},i,cod[8]{0,0,0,0,0,},mat[8][5],l,c,cont=0,esc,aux;
    for(i=0;i<=7;i++){
        printf("Digite a idade do aluno [%d]: ",i+1);
        scanf("%d",&idade[i]);
    }
    for(i=0;i<5;i++){
        printf("Digite o codigo da disciplina [%d]: ",i+1);
        scanf("%d",&cod[i]);
    }
    for(l=0;l<8;l++){
        for(c=0;c<5;c++){
            printf("Digite quantas provas o aluno %d fez da disciplina %d: ",l+1,cod[c]);
            scanf("%d",&mat[l][c]);
    }}
    do{
    printf("\n\nDigite o codigo da disciplina para ver se algum aluno fez 2 provas ou mais: ");
    scanf("%d",&esc);
    for(l=0;l<5;l++){
        if(esc==cod[l]){
            aux=1;
            esc=l;
    }}
    if(aux!=1)
        printf("Disciplina nao cadastrada. ");
    }
    while(aux!=1);
    for(i=0;i<8;i++){
        if((idade[i]>18)&&(idade[i]<25)){
            if(mat[i][esc]>2)
                cont++;
    }}
    printf("\n%d Alunos fizeram mais que 2 provas tendo mais que 18 e menos que 25 anos.\n",cont);
    do{
    printf("\n\nDigite o codigo da disciplina para ver se algum aluno fez 3 provas ou menos: ");
    scanf("%d",&esc);
    for(l=0;l<5;l++){
        if(esc==cod[l]){
            aux=1;
            esc=l;
    }}
    if(aux!=1)
        printf("Disciplina nao cadastrada. ");
    }
    while(aux!=1);
    for(i=0;i<8;i++){
            if(mat[i][esc]<3){
                printf("\nO aluno %d fez menos que 3 provas nessa disciplina.\n",i+1);
    }}

    for(l=0;l<8;l++){
    if((mat[l][0])||(mat[l][1])||(mat[l][2])||(mat[l][3])||(mat[l][4])){
        soma=soma+idade[l];
        contt++;
    }}
    if(contt==0)
        printf("\n\nNao houve alunos que nao fizeram prova\n");
    else
        printf("\n\nA media de idade dos alunos que nao fizeram alguma prova eh: %.2f\n",soma/contt);

}
