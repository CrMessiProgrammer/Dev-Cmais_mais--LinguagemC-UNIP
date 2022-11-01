/*
	13.Faça uma função que receba dois valores numéricos e um símbolo. Este símbolo representará a
	operação que se deseja efetuar com os números. Se o símbolo for + deverá ser realizada uma adição,
	se for - uma subtração, se for / uma divisão e se for * será efetuada uma multiplicação.
*/

#include <stdio.h>
#include <stdlib.h>

void calculadora(float num1, float num2, char operacao)
{ 	        
	fflush(stdin);
	printf("Escolha sua operação [+ - * / ]: ");
    scanf("%c",&operacao);

    switch(operacao)
    {
        case '+':
			printf("%.2f + %.2f = %.2f", num1, num2, num1 + num2);
            break;

        case '-':
            printf("%.2f - %.2f = %.2f", num1, num2, num1 - num2);
            break;

        case '*':
            printf("%.2f * %.2f = %.2f", num1, num2, num1 * num2);
            break;

        case '/':
            printf("%.2f / %.2f = %.2f", num1, num2, num1 / num2);
            break;
            printf("Você digitou uma operacao invalida.");
    }
}

int main()
{
	float valor1, valor2, conta;
	
	printf("Digite o primeito valor: ");
	scanf("%f", &valor1);
	
	printf("Digite o segundo valor: ");
	scanf("%f", &valor2);
	
	calculadora(valor1, valor2, conta);
}
