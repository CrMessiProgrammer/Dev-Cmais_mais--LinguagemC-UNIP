/*
	16.Fa�a um programa que leia um vetor de 5 posi��es para n�meros reais e, depois, um c�digo inteiro.
	Se o c�digo for zero, finalize o programa; se for 1, mostre o vetor na ordem direta; se for 2, mostre
	o vetor na ordem inversa. Caso, o c�digo for diferente de 1 e 2 escreva uma mensagem informando
	que o c�digo � inv�lido.
*/

#include <stdio.h>

int main() 
{
	float vetor[5], ax;

	int cod, i, j;

	for (i=0; i<5; i++)
	{
		printf("Informe o vetor[%d]: ", i);
		scanf("%f", &vetor[i]);
	}
	
	printf("\nEscolha uma das abaixo:\n\t1 - Ordem direta\n\t2 - Ordem inversa\n\t0 - Fim\nSua escolha foi: ");
	scanf("%d", &cod);

	while ((cod < 0) || (cod > 2))
	{
		printf("->Codigo invalido<-\n\nEscolha novamente: ");
		scanf("%d", &cod);
	}
	switch (cod)
	{
		case 1:
			printf("1 - Ordem direta\n");
			for (i=0; i<5; i++)
			printf("Vetor[%d]:%.1f ", i, vetor[i]);
			break;

		case 2:
			printf("2 - Ordem inversa\n");
			for (i=5-1; i>=0; i--)
			printf("Vetor[%d]:%.1f ", i, vetor[i]);
			break;

		case 0:
			printf("Voce finalizou seu programa.\n");
	}
}
