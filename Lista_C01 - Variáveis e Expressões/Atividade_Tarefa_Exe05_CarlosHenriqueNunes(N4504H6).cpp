/* 
	5.Escreva um programa que pergunte o dia, m�s e ano do anivers�rio de uma pessoa e diga
	se a data � v�lida ou n�o. Caso n�o seja, diga o motivo. Suponha que todos os meses
	tem 31 dias e que estejamos no ano de 2013.
*/

#include <stdio.h>
#include <locale.h>

/*
	Operadores l�gicos
	|| -> OU
	&& -> E	
*/
int main()
{
	setlocale(LC_ALL,"Portuguese");	//idioma em portugu�s
	
	int dia,mes,ano;
	
	printf("Dia: ");
	scanf("%d",&dia);
	
	if(dia < 1 || dia > 31)
	{
		printf("Dia inv�lido.\n");
	}
	
	else
	{
		printf("M�s: ");
		scanf("%d",&mes);
		if(mes < 1 || mes > 12)
		{
			printf("M�s inv�lido.\n");
		}
		else
		{
			printf("Ano: ");
			scanf("%d",&ano);
			if(ano > 2013)
			{
				printf("Ano inv�lido.\n");
			}
			else
			{
				printf("Data v�lida.\n");
			}
		}
	}
}
