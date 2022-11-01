#include <stdio.h>

int main()
{
	int count, soma;
	
	for(count = 1 ; soma = 0 ; count <= 100 , count++)
	{
		if( count%5 == 0 )
		{			
			printf("%d\n",count);
			soma = soma + count;
		}
	}
	printf("Soma %d", soma);
}
