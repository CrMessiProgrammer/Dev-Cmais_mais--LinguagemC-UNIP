/*
	24.Escreva um programa que leia um n�mero inteiro e calcule a soma de todos os divisores
	desse n�mero, com exce��o dele pr�prio.
	Ex: a soma dos divisores do n�mero 66 � 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78
*/

#include <stdio.h>

int main(void)
{
	int numero;
	int soma;
	
	printf("Informe um numero inteiro: ");
	scanf("%d",&numero);
	printf("\nO numero informado foi o %d, os divisores sao: \n",numero);
	
	soma = 1; 						//come�amos de 1 pois todo n�mero � divis�vel por 1 
	
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
