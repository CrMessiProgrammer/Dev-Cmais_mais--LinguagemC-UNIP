/*
	39.Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela
	que considera o salário atual e o tempo de serviço de cada funcionário. Os funcionários
	com menor salário terão um aumento proporcionalmente maior do que os funcionários
	com um salário maior, e conforme o tempo de serviço na empresa, cada funcionário
	irá receber um bônus adicional de salário. Faça um programa que leia:
	•O valor do salário atual do funcionário;
	•O tempo de serviço desse funcionário na empresa (número de anos de trabalho na empresa).
	Use as tabelas abaixo para calcular o salário reajustado deste funcionário e imprima
	o valor do salário final reajustado, ou uma mensagem caso o funcionário não tenha direito
	a nenhum aumento.
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float salario_atual, tempo_servico, aumento, salario_reajustado;
	
	printf("Digite seu salário atual: ");
    scanf("%f", &salario_atual);
    
    printf("Digite seu tempo de serviço (número de anos na empresa): ");
    scanf("%f", &tempo_servico);
    
    if ((salario_atual <= 500.00)&&(tempo_servico < 1.0))
    {
    	salario_reajustado = salario_atual * 0.25;
    	aumento = salario_atual + salario_reajustado;
    	printf("Seu novo salário é: %.2f", aumento);
	}
	else if((salario_atual > 500.00)&&(salario_atual <= 1000.0)&&(tempo_servico >= 1.0)&&(tempo_servico <= 3.0))
	{
		salario_reajustado = salario_atual * 0.20 + 100.0;
    	aumento = salario_atual + salario_reajustado;
    	printf("Seu novo salário é: %.2f", aumento);
	}
	else if ((salario_atual > 1000)&&(salario_atual <= 1500.0)&&(tempo_servico >= 4.0)&&(tempo_servico <= 6.0))
	{
		salario_reajustado = salario_atual * 0.15 + 200.0;
		aumento = salario_atual + salario_reajustado;
		printf("Seu novo salário é: %.2f", aumento);				
	}
	else if ((salario_atual > 1500.0)&&(salario_atual <= 2000.0)&&(tempo_servico >= 7.0)&&(tempo_servico <= 10.0))
	{
		salario_reajustado = salario_atual * 0.10 + 300.0;
		aumento = salario_atual + salario_reajustado;
		printf("Seu novo salário é: %.2f", aumento);
	}
	else if ((salario_atual > 2000.0)&&(tempo_servico >= 10.0))
	{
		aumento = salario_atual + 500;
		printf("Você não tem reajuste, mas pelo seu tempo de serviço ganhará mais 500. Seu novo salário é: %.2f", aumento);
	}
}
