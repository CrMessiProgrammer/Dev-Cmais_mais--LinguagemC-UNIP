/*
	24.Escreva uma fun��o que receba um array de inteiros V e os endere�os de duas vari�veis
	inteiras, min e max, e armazene nessas vari�veis o valor m�nimo e m�ximo do array.
	Escreva tamb�m uma fun��o main que use essa fun��o.
*/

#include <stdio.h> 

void array(int V[2], int min, int max)
{	
	if (V[0] >= min && V[0] <= max)
	{
		printf("Digite o valor do vetor 2: ");
		scanf("%d", &V[1]);
		
		if (V[1] >= min && V[1] <= max)
		{
			printf("Ambos valores foram aceitos. ");
		}
		else
		{
			printf("Valor 2 fora da margem. ");
		}
	}else
	{
		printf("Valor 1 fora da margem. ");
	}
}

int main()
{
	int vetor[2];
	int minimo = 1, maximo = 100;
	
	int *margemMin;
	margemMin = &minimo;
	
	int *margemMax;
	margemMax = &maximo;
	
	printf("Sua margem de vetores eh de %d ate %d. ", *margemMin, *margemMax);
	printf("\n\nDigite o valor do vetor 1: ");
	scanf("%d", &vetor[0]);
	
	array(vetor, minimo, maximo);
}
