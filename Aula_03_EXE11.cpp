#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	//bool condicao_1 = true, condicao_2 = false;
	
	bool condicao_1,condicao_2;
	
	condicao_1 = false;
	condicao_2 = true;
	
	if(condicao_1) {
		printf("Condi��o_1...Verdadeira --> Sai do la�o\n");
	}
	else if(condicao_2) {
			printf("Condi��o_2...Verdadeira --> Sai do la�o\n");
		}
			else
			{
				printf("Condi��o 2 - Falsa e sai do la�o\n");
			}
			
	printf("....continua instru��es\n");
	
	return 0;
}
