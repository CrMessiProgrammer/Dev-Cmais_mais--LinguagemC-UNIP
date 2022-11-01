#include <stdio.h>

int main(void)
{
	int up, down;
	
	printf("CRESCENTE \tDECRESCENTE\n");
	for(up = 1, down = 10 ; up <= 10 && down >= 1 ; up++, down--)
	{
		printf("    %d \t\t    %d\n", up, down);
	}
}
