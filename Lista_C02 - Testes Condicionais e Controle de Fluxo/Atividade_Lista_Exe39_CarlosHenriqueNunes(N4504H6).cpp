/*
	39.Uma empresa decide dar um aumento aos seus funcion�rios de acordo com uma tabela
	que considera o sal�rio atual e o tempo de servi�o de cada funcion�rio. Os funcion�rios
	com menor sal�rio ter�o um aumento proporcionalmente maior do que os funcion�rios
	com um sal�rio maior, e conforme o tempo de servi�o na empresa, cada funcion�rio
	ir� receber um b�nus adicional de sal�rio. Fa�a um programa que leia:
	�O valor do sal�rio atual do funcion�rio;
	�O tempo de servi�o desse funcion�rio na empresa (n�mero de anos de trabalho na empresa).
	Use as tabelas abaixo para calcular o sal�rio reajustado deste funcion�rio e imprima
	o valor do sal�rio final reajustado, ou uma mensagem caso o funcion�rio n�o tenha direito
	a nenhum aumento.
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float salario_atual, tempo_servico, aumento, salario_reajustado;
	
	printf("Digite seu sal�rio atual: ");
    scanf("%f", &salario_atual);
    
    printf("Digite seu tempo de servi�o (n�mero de anos na empresa): ");
    scanf("%f", &tempo_servico);
    
    if ((salario_atual <= 500.00)&&(tempo_servico < 1.0))
    {
    	salario_reajustado = salario_atual * 0.25;
    	aumento = salario_atual + salario_reajustado;
    	printf("Seu novo sal�rio �: %.2f", aumento);
	}
	else if((salario_atual > 500.00)&&(salario_atual <= 1000.0)&&(tempo_servico >= 1.0)&&(tempo_servico <= 3.0))
	{
		salario_reajustado = salario_atual * 0.20 + 100.0;
    	aumento = salario_atual + salario_reajustado;
    	printf("Seu novo sal�rio �: %.2f", aumento);
	}
	else if ((salario_atual > 1000)&&(salario_atual <= 1500.0)&&(tempo_servico >= 4.0)&&(tempo_servico <= 6.0))
	{
		salario_reajustado = salario_atual * 0.15 + 200.0;
		aumento = salario_atual + salario_reajustado;
		printf("Seu novo sal�rio �: %.2f", aumento);				
	}
	else if ((salario_atual > 1500.0)&&(salario_atual <= 2000.0)&&(tempo_servico >= 7.0)&&(tempo_servico <= 10.0))
	{
		salario_reajustado = salario_atual * 0.10 + 300.0;
		aumento = salario_atual + salario_reajustado;
		printf("Seu novo sal�rio �: %.2f", aumento);
	}
	else if ((salario_atual > 2000.0)&&(tempo_servico >= 10.0))
	{
		aumento = salario_atual + 500;
		printf("Voc� n�o tem reajuste, mas pelo seu tempo de servi�o ganhar� mais 500. Seu novo sal�rio �: %.2f", aumento);
	}
}
