#include <stdio.h>

int main()
{
	int count, numero;
	
	for(count = 1 ; count <= 1000000 ; count++)
		if((count%11==0) && (count%13==0) && (count%17==0))
		{
			numero=count;
			break;
		}
	printf("O numero e: %d", numero);
}
