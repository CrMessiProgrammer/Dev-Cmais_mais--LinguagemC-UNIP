#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");	//idioma em portugu�s
	
	int resultado;
	
	printf("Quanto � 1 + 1?: ");
	scanf("%d",&resultado);
/*
	Operadores de Compara��o
	==	-> igual a
	>=	-> maior ou igual a
	<=	-> menor ou igual a
	!=	-> diferente de
	>	-> maior que
	<	-> menor que
*/	
	if(resultado == 2)
	{
		printf("Parab�ns, voc� n�o usa drogas\n");
	}
	else
	{
		printf("Amigo, para seu bem, pare de fumar...\n");
	}
}
