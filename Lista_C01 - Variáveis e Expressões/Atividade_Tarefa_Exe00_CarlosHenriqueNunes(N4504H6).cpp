/* 
	0.Fa�a um programa que pe�a dois n�meros ao usu�rio 
	e mostre qual o maior e qual o menor.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");	//idioma em portugu�s
	
	int numero1,numero2;
	
	printf("Digite o primeiro n�mero: ");
	scanf("%d",&numero1);
	
	printf("Digite o segundo n�mero: ");
	scanf("%d",&numero2);
	
	if(numero1 > numero2)
	{
		printf("\n O maior n�mero � o %d.",numero1);
		printf("\n E o menor n�mero � o %d.",numero2);
	}
	else
	{
		printf("\n O maior n�mero � o %d.",numero2);
		printf("\n E o menor n�mero � o %d.",numero1);
	}
}
