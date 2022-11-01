/*
	25.Calcule as raízes da equação de 2º grau. A variável “a” tem que ser diferente de zero.
	Caso seja igual, imprima a mensagem “Não é equação de segundo grau”.
	•Se ? < 0, não existe real. Imprima a mensagem não existe raiz.
	•Se ? = 0, existe uma raiz real. Imprima a raiz e a mensagem Raiz única.
	•Se ? > 0, imprima as duas raízes reais.
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int a, b, c, delta;
	
	printf("Digite o valor de a: ");
	scanf("%d", &a);
	printf("Digite o valor de b: ");
	scanf("%d", &b);
	printf("Digite o valor de c: ");
	scanf("%d", &c);
	
	delta = pow(b, 2) - (4*a*c);
	
	printf("\n");
	
	if (a == 0)
	{
		printf("Não é uma equação de segundo grau.\n");	
	}
	else if (delta < 0)
	{
		printf("Não existe raiz.");
	}
	else if (delta == 0)
	{
		float x;
		x = -b / (2 * a);
		printf("x' e x'' = %.2f\n", x);
		printf("Raiz Única.");
	}
	
	else if (delta > 0)
	{
		float x1, x2;
		x1 = (-b + sqrt(delta)) / (2*a);
		x2 = (-b - sqrt(delta)) / (2*a);
		printf("x' = %.2f\n", x1);
		printf("x'' = %.2f\n", x2);	
	}
}
