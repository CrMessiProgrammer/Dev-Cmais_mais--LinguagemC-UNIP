#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	//bool condicao_1 = true, condicao_2 = false;
	
	bool condicao_1,condicao_2;
	
	condicao_1 = true;
	condicao_2 = true;
	
	if(condicao_1) {
		printf("Condi��o_1...Verdadeira --> Verifica condi��o_2\n");
		
		if(condicao_2) {
			printf("Condi��o_2...Verdadeira --> Sai do la�o\n");
		}
		else
		{
			printf("Condi��o 1 - verdadeira e condi��o_2 falsa\n");
			printf("Sai do la�o condi��o_2\n");
		}
	}
	printf("Condi��o_1 Falsa.....continua instru��es\n");
	
	return 0;
}
