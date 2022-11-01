/*
	31.Faça um programa que calcule e escreva o valor de S:
	S= 1/1 + 3/2 + 5/3 + 7/4... 99/50
*/

#include<stdio.h>

int main()
{
	int numerador,denominador;
	float soma;

	numerador=1;
	soma=0;

	for(denominador=1; denominador<=50; denominador++)
	{
		soma=soma+(float)numerador/denominador; 		//perceba a necessidade do (float)
		numerador=numerador+2;
	}
	printf("Resultado de S = %.3f \n",soma);
}
