/*
	7.Crie um programa que contenha uma fun��o que permita passar por par�metro dois n�meros
	inteiros A e B. A fun��o dever� calcular a soma entre estes dois n�meros e armazenar o
	resultado na vari�vel A. Esta fun��o n�o dever� possuir retorno, mas dever� modificar
	o valor do primeiro par�metro. Imprima os valores de A e B na fun��o principal.
*/

#include <stdio.h>

int soma(int A, int B)
{
	int c;
	c = A + B;
	return c;
}

int main()
{
	int num1, num2, resultado;
	
	printf("Digite o valor de A: ");
	scanf("%d", &num1);
	
	printf("Digite o valor de B: ");
	scanf("%d", &num2);
	
	resultado = soma(num1, num2);
	printf("\nValor da soma entre A e B = %d", resultado);
	
	int *pA = &resultado;
	
	printf("\n\nValor final: A = %d e B = %d", *pA, num2);
}
