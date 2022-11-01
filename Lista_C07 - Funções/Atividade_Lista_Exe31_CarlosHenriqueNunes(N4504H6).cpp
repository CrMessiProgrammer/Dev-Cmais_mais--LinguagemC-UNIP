/*
	31.Fa�a uma fun��o para calcular o n�mero neperiano usando uma s�rie. A fun��o deve ter como
	par�metro o n�mero de termos que ser�o somados (note que, quanto maior o n�mero, mais pr�xima
	a resposta estar� do valor e).
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
