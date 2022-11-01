/*
	14.A nota final de um estudante � calculada a partir de tr�s notas atribu�das entre
	o intervalo de 0 at� 10, respectivamente, a um trabalho de laborat�rio, a uma
	avalia��o semestral e a um exame final. A m�dia das tr�s notas mencionadas
	anteriormente obedece aos pesos:
	Trabalho de Laborat�rio: 2; Avalia��o Semestral: 3; Exame Final: 5.
	De acordo com o resultado, mostre na tela se o aluno est� reprovado (m�dia entre 0 e 2,9),
	derecupera��o (entre 3 e 4,9) ou se foi aprovado. Fa�a todas as verifica��es necess�rias.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float mediaPonderada( float lab, float sem, float ex)
{
	return( lab * 2 + sem * 3 + ex * 5) / 10;
}

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float laboratorio = 0, semestral = 0, exame = 0;
	float media;
	
	printf("\n Digite a nota de laborat�rio: ");
	scanf("%f", &laboratorio);
	
	while(laboratorio < 0 || laboratorio > 10)
	{
		printf("\n Valor fora do intervalo. Digite novamente: ");
		scanf("%f", &laboratorio);
	}
	
	printf("\n Digite a nota da avalia��o semestral: ");
	scanf("%f", &semestral);
	
	printf("\n Digite a nota do exame: ");
	scanf("%f", &exame);
	
	media = mediaPonderada( laboratorio, semestral, exame);
	
	printf("\n M�dia = %.2f \n\n", media);
	
	if (media < 3.0f)
	{
		printf("\n\n Aluno Reprovado! \n");
	}
	else if (media < 5.0f )
	{
		printf("\n\n Aluno de Recupera��o! \n");
	}
	else
	{
		printf("\n\n Aluno Aprovado! \n");
	}
}
