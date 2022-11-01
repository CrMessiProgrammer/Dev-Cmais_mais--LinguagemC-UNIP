/*
	1.Faça um programa que possua um vetor denominado A que armazene 6 números inteiros.
	O programa deve executar os seguintes passos:
	a)Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
	b)Armazene em uma variável inteira (simples) a soma entre os valores das posições.
	c)A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
	d)Modifique o vetor na posição 4, atribuindo a esta posição o valor 100.
	e)Mostre na tela cada valor do vetor A, um em cada linha.
*/

#include <stdio.h>

int main()
{
	int A[ 6 ]={1, 0, 5, -2, -5, 7};
		
	int soma;
	soma= A[0] + A[1] + A[5];
	
	printf("A soma entre o vetores A[0], A[1] e A[5] = %d", soma);
	
	A[ 3 ]= 100;
	
	printf("\n\nValores dos vetores:");
	printf("\nVetor[1]= %d", A[0]);
	printf("\nVetor[2]= %d", A[1]);
	printf("\nVetor[3]= %d", A[2]);
	printf("\nVetor[4]= %d", A[3]);
	printf("\nVetor[5]= %d", A[4]);
	printf("\nVetor[6]= %d\n", A[5]);
}
