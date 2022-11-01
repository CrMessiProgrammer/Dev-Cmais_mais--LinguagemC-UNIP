/* 
	2.Escreva um programa em C que recebe um inteiro e diga se é par ou ímpar.
	Use o operador matemático % (resto da divisão ou módulo) e o teste condicional if.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");	//idioma em português
	
	int numero;
	
	printf("Digite um número inteiro: ");
	scanf("%d",&numero);
	
	if( (numero % 2) == 0)
	{
		printf("O número %d é par.\n",numero);
	}
	else
	{
		printf("O número %d é ímpar.\n",numero);
	}
}
