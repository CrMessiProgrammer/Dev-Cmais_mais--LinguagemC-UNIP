/* 
	1.Fa�a um programa que receba tr�s inteiros e diga qual 
	deles � o maior e qual o menor. Consegue criar mais de uma solu��o?
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");	//idioma em portugu�s
	
	int numero1,numero2,numero3;
	
	printf("Digite o primeiro n�mero: ");
	scanf("%d",&numero1);
	
	printf("Digite o segundo n�mero: ");
	scanf("%d",&numero2);
	
	printf("Digite o terceiro n�mero: ");
	scanf("%d",&numero3);
	
	if(numero1 > numero2)
	{
		if(numero1 > numero3)
		{
			printf("\n O maior n�mero � o %d.",numero1);
		}
		else
		{
			printf("\n O maior n�mero � o %d.",numero3);
		}
	}
	else
	{
		if(numero2 > numero3)
		{
			printf("\n O maior n�mero � o %d.",numero2);
		}
		else
		{
			printf("\n O maior n�mero � o %d.",numero3);
		}
	}
	if(numero1 < numero2)
	{
		if(numero1 < numero3)
		{
			printf("\n O menor n�mero � o %d.",numero1);
		}
		else
		{
			printf("\n O menor n�mero � o %d.",numero3);
		}
	}
	else
	{
		if(numero2 < numero3)
		{
			printf("\n O menor n�mero � o %d.",numero2);
		}
		else
		{
			printf("\n O menor n�mero � o %d.",numero3);
		}
	}
}
