/* 
	0.Faça um programa que peça dois números ao usuário 
	e mostre qual o maior e qual o menor.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");	//idioma em português
	
	int numero1,numero2;
	
	printf("Digite o primeiro número: ");
	scanf("%d",&numero1);
	
	printf("Digite o segundo número: ");
	scanf("%d",&numero2);
	
	if(numero1 > numero2)
	{
		printf("\n O maior número é o %d.",numero1);
		printf("\n E o menor número é o %d.",numero2);
	}
	else
	{
		printf("\n O maior número é o %d.",numero2);
		printf("\n E o menor número é o %d.",numero1);
	}
}
