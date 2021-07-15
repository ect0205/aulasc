#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	system("chcp 1252");
	system("color 81");
	printf("Hello World\nolá mundo ");
	
	//frequencia em hertz, tempo em milissegundos
	//Beep(500, 1000);
	
	for (int i=1; ; i++){
	printf("%d ", i);
	Sleep(300);}

}
