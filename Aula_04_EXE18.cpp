#include <stdio.h>

int main(void)
{
	int inicio, razao, termos;
	
	int num, contador=1;
	
	printf("Digite o numero inicial da P.A: ");
	scanf("%d", &inicio);
	
	printf("Digite a razao da P.A: ");
	scanf("%d", &razao);
	
	printf("Digite o numero de termos da P.A: ");
	scanf("%d", &termos);
	
	while(contador <= termos)
	{
		num = inicio + (contador - 1) * razao;
		printf("Termo %d: %d\n",contador, num);
		contador++;
	}
}
