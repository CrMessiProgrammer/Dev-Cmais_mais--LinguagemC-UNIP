/*
	41.Faça um algoritmo que calcule o IMC de uma pessoa e mostre sua classificação
	de acordo com a tabela abaixo:
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
    float massa, altura, imc;

    printf("Digite seu peso (em kg): ");	//se preciso, usar com vírgula (64,5)
    scanf("%f", &massa);
    
    printf("Digite sua altura (em metros): ");	//com vírgula (1,70)
    scanf("%f", &altura);

    imc = massa / (altura * altura);

    if(imc < 18.5)
    {
        printf("IMC: %.1f -> Abaixo do Peso\n", imc);
	}
	
	else if(imc >= 18.6 && imc <= 24.9)
	{
	    printf("IMC: %.1f -> Saudável\n", imc);
	}
	
	else if(imc >= 25 && imc <= 29.9)
	{
        printf("IMC: %.1f -> Peso em Excesso\n", imc);
	}
	
	else if(imc >= 30 && imc <= 34.9)
	{
        printf("IMC: %.1f -> Obesidade Grau 1\n", imc);
	}
	
	else if(imc >= 35 && imc <= 39.9)
	{
        printf("IMC: %.1f -> Obesidade Grau 2(severa)\n", imc);
	}
	
	else if(imc >= 40)
	{
		printf("IMC: %.1f -> Obesidade Grau 3(mórbida)\n", imc);
	}
}
