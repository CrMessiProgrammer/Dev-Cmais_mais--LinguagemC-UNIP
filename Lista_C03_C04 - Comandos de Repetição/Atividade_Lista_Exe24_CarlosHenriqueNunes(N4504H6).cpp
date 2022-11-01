/*
	24.Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores
	desse número, com exceção dele próprio.
	Ex: a soma dos divisores do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78
*/

#include <stdio.h>

int main(void)
{
	int numero;
	int soma;
	
	printf("Informe um numero inteiro: ");
	scanf("%d",&numero);
	printf("\nO numero informado foi o %d, os divisores sao: \n",numero);
	
	soma = 1; 						//começamos de 1 pois todo número é divisível por 1 
	
	for (int i=2 ; i <= (numero/2.0+1) ; i++ )
	{
		if (numero % i == 0)
		{
			printf("-> %d \n",i);
			soma += i;
    	}
  	}
  	printf("\nA soma deles (ja incluindo o numero 1) e: %d \n",soma);
}
