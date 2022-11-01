/*
	39.Faça uma função ‘Troque’, que recebe duas variáveis reais A e B e troca o valor delas
	(i.e.,A recebe o valor de B e B recebe o valor de A).
*/

#include <stdio.h>

void Troque(float x, float y)
{	
	
	printf("\n\nValores depois da funcao 'troque': A = %.2f e B = %.2f", x, y);

}

int main()
{
	float A, B;
	
	printf("Digite o valor A: ");
	scanf("%f", &A);
	
	printf("Digite o valor B: ");
	scanf("%f", &B);
	
	printf("Valores antes das trocas: A = %.2f e B = %.2f", A, B);
	
	Troque(B,A);
	
	return 0;
}
