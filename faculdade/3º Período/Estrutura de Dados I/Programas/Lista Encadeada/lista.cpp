#include<stdio.h>
/*
Algoritmo inicializaLista
FUN��O inicializaLista()
in�cio
aLista.ultimo := -1;
Fim;

Algoritmo DestroiLista
FUN��O destroiLista()
in�cio
aLista.ultimo := -1;
fim;

Algoritmo ListaVazia

Booleano FUN��O listaVazia()
in�cio
SE (aLista.ultimo = -1) ENT�O
RETORNE(Verdade)
SEN�O
RETORNE(Falso);
fim;
Constantes
ErroListaCheia = -1;
ErroListaVazia = -2;
ErroPosi��o = -3;

Algoritmo Adiciona

Inteiro FUN��O adiciona(inteiro dado)
in�cio
SE (listaCheia) ENT�O
RETORNE(ErroListaCheia);
SEN�O
aLista.ultimo := aLista.ultimo + 1.
aLista.dados[aLista.ultimo] := dado;
RETORNE(aLista.ultimo);
FIM SE
fim;

Algoritmo Retira

Inteiro FUN��O retira()
in�cio
SE (listaVazia) ENT�O
RETORNE(ErroListaVazia);
SEN�O
aLista.ultimo := aLista.ultimo - 1.
RETORNE(aLista.dados[aLista.ultimo+1]);
FIM SE
fim;

Algoritmo AdicionaNoIn�cio

Inteiro FUN��O adicionaNoIn�cio(inteiro dado)
vari�veis
inteiro posi��o; //�Vari�vel auxiliar para percorrer�
in�cio
SE (listaCheia) ENT�O
RETORNE(ErroListaCheia);
SEN�O
aLista.ultimo := aLista.ultimo + 1;
posi��o := aLista.ultimo;
ENQUANTO (posi��o > 0) FA�A
//�Empurrar tudo para tras�
aLista.dados[posicao] := aLista.dados[posicao-1];
posi��o := posi��o - 1;
FIM ENQUANTO
aLista.dados[0] := dado;
RETORNE(0);
FIM SE
fim;

Algoritmo RetiraDoIn�cio

Inteiro FUN��O retiraDoIn�cio()
vari�veis
Inteiro posi��o, valor;
in�cio
SE (listaVazia) ENT�O
RETORNE(ErroListaVazia);
SEN�O
aLista.ultimo := aLista.ultimo - 1;
valor := aLista.dados[0];
posi��o := 0;
ENQUANTO (posi��o <= aLista.ultimo) FA�A
//�Empurrar tudo para traz�
aLista.dados[posicao] := aLista.dados[posicao + 1];
posi��o := posi��o + 1;
FIM ENQUANTO
RETORNE(valor);
FIM SE
fim;

Algoritmo AdcionaNaPosi��o

Inteiro FUN��O adicionaNaPosi��o(inteiro dado, destino)
vari�veis
inteiro posi��o;
in�cio
SE (listaCheia) ENT�O
RETORNE(ErroListaCheia);
SEN�O
SE (destino > aLista.ultimo + 1) ENT�O
RETORNE(ErroPosi��o);
FIM SE
aLista.ultimo := aLista.ultimo + 1;
posi��o := aLista.ultimo;
ENQUANTO (posi��o > destino) FA�A
//�Empurrar tudo para tras�
aLista.dados[posicao] := aLista.dados[posicao - 1];
posi��o := posi��o - 1;
FIM ENQUANTO
aLista.dados[destino] := dado;
RETORNE(destino);
FIM SE
fim;

Algoritmo RetiraEspecifico

Inteiro FUN��O retiraDaPosi��o(inteiro fonte)
vari�veis
Inteiro posi��o, valor;
in�cio
SE (fonte > aLista.ultimo) ENT�O
RETORNE(ErroPosi��o);
SEN�O
SE (listaVazia) ENT�O
RETORNE(ErroListaVazia);
SEN�O
aLista.ultimo := aLista.ultimo - 1;
valor := aLista.dados[fonte];
posi��o := fonte;
ENQUANTO (posi��o <= aLista.ultimo) FA�A
//�Empurrar tudo para frente�
aLista.dados[posicao] := aLista.dados[posicao + 1];
posi��o := posi��o + 1;
FIM ENQUANTO
RETORNE(valor);
FIM SE
FIM SE
fim;

Algoritmo Posi��o

Inteiro FUN��O posi��o(inteiro dado)
vari�veis
inteiro posi��o;
in�cio
posi��o := 0;
ENQUANTO (posi��o <= aLista.ultimo E
N�O(IGUAL(dado,aLista.dados[posi��o])))
FA�A
posi��o := posi��o + 1;
FIM ENQUANTO
SE (posi��o > aLista.ultimo) ENT�O
RETORNE(ErroPosi��o);
SEN�O
RETORNE(posi��o);
FIM SE
fim;

Algoritmo RetiraEspec�fico

Inteiro FUN��O retiraEspec�fico(inteiro
dado)
vari�veis
inteiro posi��o;
in�cio
SE (listaVazia) ENT�O
RETORNE(ErroListaVazia);
SEN�O
posi��o := posi��o(dado);
SE (posi��o < 0) ENT�O
RETORNE(ErroPosi��o);
SEN�O
RETORNE(retiraDaPosi��o(posi��o));
FIM SE
FIM SE

Algoritmo Cont�m

Booleano FUN��O Cont�m(inteiro dado)
vari�veis
inteiro posi��o;
In�cio
posi��o := 0;
ENQUANTO (posi��o <= aLista.ultimo E
N�O(IGUAL(dado,aLista.dados[posi��o])))
FA�A
posi��o := posi��o + 1;
FIM ENQUANTO
SE (posi��o > aLista.ultimo) ENT�O
RETORNE(Falso);
SEN�O
RETORNE(Verdadeiro);
FIM SE
fim;
