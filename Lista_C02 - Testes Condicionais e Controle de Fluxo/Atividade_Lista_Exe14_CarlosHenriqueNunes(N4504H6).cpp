/*
	14.A nota final de um estudante é calculada a partir de três notas atribuídas entre
	o intervalo de 0 até 10, respectivamente, a um trabalho de laboratório, a uma
	avaliação semestral e a um exame final. A média das três notas mencionadas
	anteriormente obedece aos pesos:
	Trabalho de Laboratório: 2; Avaliação Semestral: 3; Exame Final: 5.
	De acordo com o resultado, mostre na tela se o aluno está reprovado (média entre 0 e 2,9),
	derecuperação (entre 3 e 4,9) ou se foi aprovado. Faça todas as verificações necessárias.
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
	
	printf("\n Digite a nota de laboratório: ");
	scanf("%f", &laboratorio);
	
	while(laboratorio < 0 || laboratorio > 10)
	{
		printf("\n Valor fora do intervalo. Digite novamente: ");
		scanf("%f", &laboratorio);
	}
	
	printf("\n Digite a nota da avaliação semestral: ");
	scanf("%f", &semestral);
	
	printf("\n Digite a nota do exame: ");
	scanf("%f", &exame);
	
	media = mediaPonderada( laboratorio, semestral, exame);
	
	printf("\n Média = %.2f \n\n", media);
	
	if (media < 3.0f)
	{
		printf("\n\n Aluno Reprovado! \n");
	}
	else if (media < 5.0f )
	{
		printf("\n\n Aluno de Recuperação! \n");
	}
	else
	{
		printf("\n\n Aluno Aprovado! \n");
	}
}
