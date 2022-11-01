/*
	31.Faça uma função para calcular o número neperiano usando uma série. A função deve ter como
	parâmetro o número de termos que serão somados (note que, quanto maior o número, mais próxima
	a resposta estará do valor e).
*/

#include <stdio.h>
#include <stdlib.h>

void neperiano(float nep, float a)
{
	printf("Valor de E = %f\n", nep);
}

int main()
{
	int N = 10;
	int i, j;
	float f, E = 1.0;
	
	for(i = 1; i <= N; i++)
	{
		f = 1;
		for(j = 1; j <= i; j++)
		{
			f = f * j;
		}
		E = E + 1.0/f;
		neperiano(E,f);
	}
	printf("Note que, quanto maior o numero, mais proximo a resposta estara do valor 'E' real. \n");
	
	return 0;
}
