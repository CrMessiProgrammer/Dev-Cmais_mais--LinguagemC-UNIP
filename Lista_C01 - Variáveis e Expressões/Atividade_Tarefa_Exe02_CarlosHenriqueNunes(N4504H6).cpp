/* 
	2.Escreva um programa em C que recebe um inteiro e diga se � par ou �mpar.
	Use o operador matem�tico % (resto da divis�o ou m�dulo) e o teste condicional if.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");	//idioma em portugu�s
	
	int numero;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%d",&numero);
	
	if( (numero % 2) == 0)
	{
		printf("O n�mero %d � par.\n",numero);
	}
	else
	{
		printf("O n�mero %d � �mpar.\n",numero);
	}
}
