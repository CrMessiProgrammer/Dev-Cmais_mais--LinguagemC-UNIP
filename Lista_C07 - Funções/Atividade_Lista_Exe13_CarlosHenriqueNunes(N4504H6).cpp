/*
	13.Fa�a uma fun��o que receba dois valores num�ricos e um s�mbolo. Este s�mbolo representar� a
	opera��o que se deseja efetuar com os n�meros. Se o s�mbolo for + dever� ser realizada uma adi��o,
	se for - uma subtra��o, se for / uma divis�o e se for * ser� efetuada uma multiplica��o.
*/

#include <stdio.h>
#include <stdlib.h>

void calculadora(float num1, float num2, char operacao)
{ 	        
	fflush(stdin);
	printf("Escolha sua opera��o [+ - * / ]: ");
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
            printf("Voc� digitou uma operacao invalida.");
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
