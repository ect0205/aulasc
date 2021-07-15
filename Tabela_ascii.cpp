// tabela_ascii.cpp
#include <stdio.h>
#include <stdlib.h>

int main(){
	
	printf("%c", NULL);
	
	for (unsigned char letra = 0; letra <= 127; letra++){
	printf("\n%c=%d", letra, letra);
	}
		return 0;
}
