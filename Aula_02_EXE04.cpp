#include <stdio.h>
#include <math.h>

int main() {
	
	float num1,num2,potencia;
	
	printf("Digite o numero real:");
	scanf("%f",&num1);
	
	potencia = pow(num1, 2);
	
	/*	ou
		comentário
		potencia = num1 * num1
	*/
	
	printf ("O quadrado dos numeros e: %f",potencia);
}
