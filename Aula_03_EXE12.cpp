#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");	//idioma em português
	
	int resultado;
	
	printf("Quanto é 1 + 1?: ");
	scanf("%d",&resultado);
/*
	Operadores de Comparação
	==	-> igual a
	>=	-> maior ou igual a
	<=	-> menor ou igual a
	!=	-> diferente de
	>	-> maior que
	<	-> menor que
*/	
	if(resultado == 2)
	{
		printf("Parabéns, você não usa drogas\n");
	}
	else
	{
		printf("Amigo, para seu bem, pare de fumar...\n");
	}
}
