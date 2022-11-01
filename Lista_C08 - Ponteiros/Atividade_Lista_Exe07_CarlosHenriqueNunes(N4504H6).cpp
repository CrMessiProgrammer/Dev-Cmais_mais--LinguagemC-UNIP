/*
	7.Crie um programa que contenha uma função que permita passar por parâmetro dois números
	inteiros A e B. A função deverá calcular a soma entre estes dois números e armazenar o
	resultado na variável A. Esta função não deverá possuir retorno, mas deverá modificar
	o valor do primeiro parâmetro. Imprima os valores de A e B na função principal.
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
