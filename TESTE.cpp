#include<stdio.h>
#include<stdlib.h>
 
int main()
{
	int x= 3, y= 4;
	int *p= &x;

	x+= y + *p;
	
	printf("Valor de X = %d", x);
}
