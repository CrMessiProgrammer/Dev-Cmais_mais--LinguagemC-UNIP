/*
	27.Em Matem�tica, o n�mero harm�nico designado por H(n) define-se como sendo a soma da
	s�rie harm�nica: H(n) = 1 + 1/2 + 1/3 + 1/4 +... + 1/n
	Fa�a um programa que leia um valor n inteiro e positivo e apresente o valor de H(n).
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float soma;
    
    int auxiliar = 1;
    soma = 0;
    
	while(auxiliar)
	{
		printf("Digite um numero qualquer ou finalize digitando 0: ");
        scanf("%d", &auxiliar);
        printf("Foi digitado: %d \n",auxiliar);
        soma=0;
        
		if(auxiliar)
		{
			for (i=1;i<=auxiliar;i++)
			{
				soma += (1.0/i);  // 1.0 ir� for�ar um c�lculo float
        	};
        	printf("O resultado deu: %f \n\n",soma);
        }
        else 
		{
			printf("Entrada terminada \n");
        }
    }
}
