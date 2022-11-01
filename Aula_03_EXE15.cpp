#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");	//idioma em português
	
	int numero;
	
/*
	Obs:
	O operador =   -> significa atribuição
	O operador ==  -> significa comparação
*/
	
	printf("Digite um inteiro: ");
	scanf("%d",&numero);
	
	if( (numero % 2) == 0)
	{
		printf("O número %d que foi digitado é par\n",numero);
	}
	else
	{
		printf("O número %d digitado, não é par\n",numero);
	}
}
