#include<stdio.h>
/*
Algoritmo inicializaLista
FUNÇÃO inicializaLista()
início
aLista.ultimo := -1;
Fim;

Algoritmo DestroiLista
FUNÇÃO destroiLista()
início
aLista.ultimo := -1;
fim;

Algoritmo ListaVazia

Booleano FUNÇÃO listaVazia()
início
SE (aLista.ultimo = -1) ENTÃO
RETORNE(Verdade)
SENÃO
RETORNE(Falso);
fim;
Constantes
ErroListaCheia = -1;
ErroListaVazia = -2;
ErroPosição = -3;

Algoritmo Adiciona

Inteiro FUNÇÃO adiciona(inteiro dado)
início
SE (listaCheia) ENTÃO
RETORNE(ErroListaCheia);
SENÃO
aLista.ultimo := aLista.ultimo + 1.
aLista.dados[aLista.ultimo] := dado;
RETORNE(aLista.ultimo);
FIM SE
fim;

Algoritmo Retira

Inteiro FUNÇÃO retira()
início
SE (listaVazia) ENTÃO
RETORNE(ErroListaVazia);
SENÃO
aLista.ultimo := aLista.ultimo - 1.
RETORNE(aLista.dados[aLista.ultimo+1]);
FIM SE
fim;

Algoritmo AdicionaNoInício

Inteiro FUNÇÃO adicionaNoInício(inteiro dado)
variáveis
inteiro posição; //“Variável auxiliar para percorrer”
início
SE (listaCheia) ENTÃO
RETORNE(ErroListaCheia);
SENÃO
aLista.ultimo := aLista.ultimo + 1;
posição := aLista.ultimo;
ENQUANTO (posição > 0) FAÇA
//“Empurrar tudo para tras”
aLista.dados[posicao] := aLista.dados[posicao-1];
posição := posição - 1;
FIM ENQUANTO
aLista.dados[0] := dado;
RETORNE(0);
FIM SE
fim;

Algoritmo RetiraDoInício

Inteiro FUNÇÃO retiraDoInício()
variáveis
Inteiro posição, valor;
início
SE (listaVazia) ENTÃO
RETORNE(ErroListaVazia);
SENÃO
aLista.ultimo := aLista.ultimo - 1;
valor := aLista.dados[0];
posição := 0;
ENQUANTO (posição <= aLista.ultimo) FAÇA
//“Empurrar tudo para traz”
aLista.dados[posicao] := aLista.dados[posicao + 1];
posição := posição + 1;
FIM ENQUANTO
RETORNE(valor);
FIM SE
fim;

Algoritmo AdcionaNaPosição

Inteiro FUNÇÃO adicionaNaPosição(inteiro dado, destino)
variáveis
inteiro posição;
início
SE (listaCheia) ENTÃO
RETORNE(ErroListaCheia);
SENÃO
SE (destino > aLista.ultimo + 1) ENTÃO
RETORNE(ErroPosição);
FIM SE
aLista.ultimo := aLista.ultimo + 1;
posição := aLista.ultimo;
ENQUANTO (posição > destino) FAÇA
//“Empurrar tudo para tras”
aLista.dados[posicao] := aLista.dados[posicao - 1];
posição := posição - 1;
FIM ENQUANTO
aLista.dados[destino] := dado;
RETORNE(destino);
FIM SE
fim;

Algoritmo RetiraEspecifico

Inteiro FUNÇÃO retiraDaPosição(inteiro fonte)
variáveis
Inteiro posição, valor;
início
SE (fonte > aLista.ultimo) ENTÃO
RETORNE(ErroPosição);
SENÃO
SE (listaVazia) ENTÃO
RETORNE(ErroListaVazia);
SENÃO
aLista.ultimo := aLista.ultimo - 1;
valor := aLista.dados[fonte];
posição := fonte;
ENQUANTO (posição <= aLista.ultimo) FAÇA
//“Empurrar tudo para frente”
aLista.dados[posicao] := aLista.dados[posicao + 1];
posição := posição + 1;
FIM ENQUANTO
RETORNE(valor);
FIM SE
FIM SE
fim;

Algoritmo Posição

Inteiro FUNÇÃO posição(inteiro dado)
variáveis
inteiro posição;
início
posição := 0;
ENQUANTO (posição <= aLista.ultimo E
NÃO(IGUAL(dado,aLista.dados[posição])))
FAÇA
posição := posição + 1;
FIM ENQUANTO
SE (posição > aLista.ultimo) ENTÃO
RETORNE(ErroPosição);
SENÃO
RETORNE(posição);
FIM SE
fim;

Algoritmo RetiraEspecífico

Inteiro FUNÇÃO retiraEspecífico(inteiro
dado)
variáveis
inteiro posição;
início
SE (listaVazia) ENTÃO
RETORNE(ErroListaVazia);
SENÃO
posição := posição(dado);
SE (posição < 0) ENTÃO
RETORNE(ErroPosição);
SENÃO
RETORNE(retiraDaPosição(posição));
FIM SE
FIM SE

Algoritmo Contém

Booleano FUNÇÃO Contém(inteiro dado)
variáveis
inteiro posição;
Início
posição := 0;
ENQUANTO (posição <= aLista.ultimo E
NÃO(IGUAL(dado,aLista.dados[posição])))
FAÇA
posição := posição + 1;
FIM ENQUANTO
SE (posição > aLista.ultimo) ENTÃO
RETORNE(Falso);
SENÃO
RETORNE(Verdadeiro);
FIM SE
fim;
