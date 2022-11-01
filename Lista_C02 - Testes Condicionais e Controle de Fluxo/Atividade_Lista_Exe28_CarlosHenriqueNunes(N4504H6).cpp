/*
	28.Faça um programa que leia três números inteiros positivos e efetue o cálculo de
	uma das seguintes médias de acordo com um valor numérico digitado pelo usuário:
	a)Geométrica; b)Ponderada; c)Harmônica; d)Aritmética.
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int x1, x2, x3, media, n=3;
	
	printf("\nDigite o primeiro número: ");
	scanf("%d", &x1);
	
	printf("\nDigite o segundo número: ");
	scanf("%d", &x2);
	
	printf("\nDigite o terceiro número: ");
	scanf("%d", &x3);
	
	media = (x1 + x2 + x3)/n;
	
	printf("\nO valor da média é: %d", media);
}
