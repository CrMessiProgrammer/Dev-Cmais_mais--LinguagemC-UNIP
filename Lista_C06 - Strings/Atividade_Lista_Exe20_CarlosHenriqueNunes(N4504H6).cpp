/*
	20.Fa�a um programa que preencha uma matriz de string com os modelos de cinco
	carros(exemplos de modelos: Fusca, Gol, Vectra, etc.). Em seguida, preencha um
	vetor com o consumo desses carros, isto �, quantos quil�metros cada um deles faz
	com um litro de combust�vel. Calcule e mostre:
	(a)O modelo de carro mais econ�mico;
	(b)Quantos litros de combust�vel cada um dos carros cadastrados consome para percorrer
	uma dist�ncia de 1.000 quil�metros.
*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main()
{
	char modelo[20] [4]; 
	int consumo[4],maisEconomico = 1000; 
	int posicaoMaisEconomico; 
	int i;

	for(i=0; i<4 ; i++)
	{
		printf("\nDigite o modelo: "); 
		scanf("%s", modelo[i]); 
		printf("\nDigite o consumo: "); 
		scanf("%d",consumo[i]);
 
		if(consumo[i] < maisEconomico)
		{
			maisEconomico = consumo[i]; 
			posicaoMaisEconomico = i; 
		} 
	}
		printf("O carro mais economico �: %s \t", modelo[posicaoMaisEconomico]); 
	
		printf("O modelo: %s \t",modelo[0]); 
		printf("consome em 1000Km %d",consumo[0] * 1000); 
		
		printf("O modelo: %s \t",modelo[1]); 
		printf("consome em 1000Km %d",consumo[1] * 1000); 
		
		printf("O modelo: %s \t",modelo[2]); 
		printf("consome em 1000Km %d",consumo[2] * 1000);
		 
		printf("O modelo: %s \t",modelo[3]); 
		printf("consome em 1000Km %d",consumo[3] * 1000); 
	
		system("PAUSE");	
		return 0;
}
