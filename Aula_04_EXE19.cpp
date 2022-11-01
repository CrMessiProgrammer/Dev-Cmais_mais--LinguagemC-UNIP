#include <stdio.h>
#include <math.h>

int main()
{
	int inicio, razao, termos;
	
	int num,contador=1;
	
	printf("Digite o numero inicial da P.G: ");
	scanf("%d", &inicio);
	
	printf("Digite a razao da P.G: ");
	scanf("%d", &razao);
	
	printf("Digite o numero de termos da P.G: ");
	scanf("%d", &termos);
	
	while(contador <= termos)
	{
		num = inicio*pow(razao,(contador - 1));
		printf("Termo %d: %d\n",contador, num);
		contador++;
	}
}
