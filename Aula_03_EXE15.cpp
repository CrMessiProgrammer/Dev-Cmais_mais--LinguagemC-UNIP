#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");	//idioma em portugu�s
	
	int numero;
	
/*
	Obs:
	O operador =   -> significa atribui��o
	O operador ==  -> significa compara��o
*/
	
	printf("Digite um inteiro: ");
	scanf("%d",&numero);
	
	if( (numero % 2) == 0)
	{
		printf("O n�mero %d que foi digitado � par\n",numero);
	}
	else
	{
		printf("O n�mero %d digitado, n�o � par\n",numero);
	}
}
