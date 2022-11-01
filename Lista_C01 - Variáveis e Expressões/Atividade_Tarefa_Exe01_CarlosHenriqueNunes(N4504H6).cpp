/* 
	1.Faça um programa que receba três inteiros e diga qual 
	deles é o maior e qual o menor. Consegue criar mais de uma solução?
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");	//idioma em português
	
	int numero1,numero2,numero3;
	
	printf("Digite o primeiro número: ");
	scanf("%d",&numero1);
	
	printf("Digite o segundo número: ");
	scanf("%d",&numero2);
	
	printf("Digite o terceiro número: ");
	scanf("%d",&numero3);
	
	if(numero1 > numero2)
	{
		if(numero1 > numero3)
		{
			printf("\n O maior número é o %d.",numero1);
		}
		else
		{
			printf("\n O maior número é o %d.",numero3);
		}
	}
	else
	{
		if(numero2 > numero3)
		{
			printf("\n O maior número é o %d.",numero2);
		}
		else
		{
			printf("\n O maior número é o %d.",numero3);
		}
	}
	if(numero1 < numero2)
	{
		if(numero1 < numero3)
		{
			printf("\n O menor número é o %d.",numero1);
		}
		else
		{
			printf("\n O menor número é o %d.",numero3);
		}
	}
	else
	{
		if(numero2 < numero3)
		{
			printf("\n O menor número é o %d.",numero2);
		}
		else
		{
			printf("\n O menor número é o %d.",numero3);
		}
	}
}
