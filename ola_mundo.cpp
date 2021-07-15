#include "stdio.h"
#include "stdlib.h"
#include <windows.h>

//Constante
#define tempo 5

//Fun��o linha
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
	//Inicializa��o da vari�vel; condi��o de execu��o
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
	printf("\nDigite o n�mero de linhas: ");
	scanf("%d", &numlinhas);
	
	printf("\nDigite o n�mero de colunas: ");
	scanf("%d", &numcolunas);
	
	linha('=', numcolunas);
	colunas(numlinhas, numcolunas);
	linha('=', numcolunas);
	
	return 0;
}
