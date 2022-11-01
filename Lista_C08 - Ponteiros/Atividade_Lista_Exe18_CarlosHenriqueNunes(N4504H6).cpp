/*
	18.Implemente uma fun��o que calcule a �rea da superf�cie e o volume de uma esfera de raio R.
	Essa fun��o deve obedecer ao prot�tipo:
	void calc_esfera(float R, float *area, float *volume)
	A �rea da superf�cie e o volume s�o dados, respectivamente, por:
	A = 4*p*R�
	V = 4/3*p*R�
*/

#include <stdio.h>
#include <stdlib.h>

void calc_esfera(float R, float area, float volume)
{	
	area = 4*3.14*R*R;
	volume = 4/3*3.14*R*R*R;
	
	float *pArea = &area;
	float *pVolume = &volume;
	
	printf("Valor da area da superfice = %.2f", *pArea);
	printf("\nValor da area da superfice = %.2f", *pVolume);
}

int main(void)
{	
	float raio, area_, volume_;
	
	printf("Digite o valor do Raio (R): ");
	scanf("%f", &raio);
	
	calc_esfera(raio,area_,volume_);
	
	return 0;
}
