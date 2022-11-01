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
		printf("Condição_1...Verdadeira --> Sai do laço\n");
	}
	else if(condicao_2) {
			printf("Condição_2...Verdadeira --> Sai do laço\n");
		}
			else
			{
				printf("Condição 2 - Falsa e sai do laço\n");
			}
			
	printf("....continua instruções\n");
	
	return 0;
}
