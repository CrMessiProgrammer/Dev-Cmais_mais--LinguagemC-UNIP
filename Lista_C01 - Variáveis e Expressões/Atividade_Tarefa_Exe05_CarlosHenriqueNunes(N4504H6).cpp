/* 
	5.Escreva um programa que pergunte o dia, mês e ano do aniversário de uma pessoa e diga
	se a data é válida ou não. Caso não seja, diga o motivo. Suponha que todos os meses
	tem 31 dias e que estejamos no ano de 2013.
*/

#include <stdio.h>
#include <locale.h>

/*
	Operadores lógicos
	|| -> OU
	&& -> E	
*/
int main()
{
	setlocale(LC_ALL,"Portuguese");	//idioma em português
	
	int dia,mes,ano;
	
	printf("Dia: ");
	scanf("%d",&dia);
	
	if(dia < 1 || dia > 31)
	{
		printf("Dia inválido.\n");
	}
	
	else
	{
		printf("Mês: ");
		scanf("%d",&mes);
		if(mes < 1 || mes > 12)
		{
			printf("Mês inválido.\n");
		}
		else
		{
			printf("Ano: ");
			scanf("%d",&ano);
			if(ano > 2013)
			{
				printf("Ano inválido.\n");
			}
			else
			{
				printf("Data válida.\n");
			}
		}
	}
}
