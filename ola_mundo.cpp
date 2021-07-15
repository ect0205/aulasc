#include "stdio.h"
#include "stdlib.h"
#include <windows.h>

//Constante
#define tempo 5

//Função linha
void linha(char car, int numcol){
		printf("+");
	
	for (int i=0 ; i<numcol ; i++ ){
		printf("%c", car);
		Sleep(tempo);
	}

	printf("+\n");
}

void espacos(int numcol){
	printf("|");
	//Inicialização da variável; condição de execução
	for(int i=0 ; i<numcol ; i++ ){
		printf(" ");
	}
	printf("|\n");
	
}

void colunas(int altura,int numcol){
	for (int i=0; i<altura; i++){
		espacos(numcol);
		Sleep(tempo);
	}
}

int main(){

	system("color f1");
	system("chcp 1252");
	
	int numlinhas, numcolunas;
	printf("\nDigite o número de linhas: ");
	scanf("%d", &numlinhas);
	
	printf("\nDigite o número de colunas: ");
	scanf("%d", &numcolunas);
	
	linha('=', numcolunas);
	colunas(numlinhas, numcolunas);
	linha('=', numcolunas);
	
	return 0;
}
