/*
	41.Fa�a um programa que calcula a associa��o em paralelo de dois resistores R1 e R2
	fornecidos pelo usu�rio via teclado. O programa fica pedindo estes valores e calculando
	at� que o usu�rio entre com um valor para resist�ncia igual a zero. R = (R1*R2)/(R1+R2)
*/

#include <stdio.h>

int main()
{
	float R1, R2, R;
	
	do											//comanda -> fa�a
	{
		printf("Digite o valor de R1: ");
		scanf("%f", &R1);
		
		printf("Digite o valor de R2: ");
		scanf("%f", &R2); 
		
		if (R1==0 || R2==0)
		{
			printf("Resistencia igual a: 0.0");
			printf("\nSua conta acaba aqui, resistencia = 0.");
		}
		else
		{
			R = (R1*R2)/(R1+R2);
			printf("Resistencia igual a: %.1f\n\n", R);
		}
	}   
	while (R1!=0 && R2!=0);						//comando -> enquanto
}
