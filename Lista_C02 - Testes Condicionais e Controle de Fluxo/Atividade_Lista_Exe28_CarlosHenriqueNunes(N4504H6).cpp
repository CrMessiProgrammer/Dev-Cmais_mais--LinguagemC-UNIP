/*
	28.Fa�a um programa que leia tr�s n�meros inteiros positivos e efetue o c�lculo de
	uma das seguintes m�dias de acordo com um valor num�rico digitado pelo usu�rio:
	a)Geom�trica; b)Ponderada; c)Harm�nica; d)Aritm�tica.
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int x1, x2, x3, media, n=3;
	
	printf("\nDigite o primeiro n�mero: ");
	scanf("%d", &x1);
	
	printf("\nDigite o segundo n�mero: ");
	scanf("%d", &x2);
	
	printf("\nDigite o terceiro n�mero: ");
	scanf("%d", &x3);
	
	media = (x1 + x2 + x3)/n;
	
	printf("\nO valor da m�dia �: %d", media);
}
