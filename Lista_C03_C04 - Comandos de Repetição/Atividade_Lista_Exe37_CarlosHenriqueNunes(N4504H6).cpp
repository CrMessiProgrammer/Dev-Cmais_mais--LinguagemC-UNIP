/*
	37.Escreve um programa que verifique quais n�meros entre 1000 e 9999 (inclusive) possuem a
	propriedade	seguinte: a soma dos dois d�gitos de mais baixa ordem com os dois d�gitos de mais
	alta ordem elevada ao quadrado � igual ao pr�prio n�mero. Por exemplo, para o inteiro 3025,
	temos que: 30+25 = 55^2 = 3025.
*/

#include <stdio.h>

int main()
{
    int num=1000;
      
    while(num <= 9999)
    {
    	if(num == (((num/100)+(num%100))*((num/100)+(num%100))))
    	{
    		printf("%d: %d+%d=%d -> %d^2=%d \n",num,num/100,num%100,(num/100)+(num%100),(num/100)+(num%100),num);
		}
		num=num+1;
    }
}
