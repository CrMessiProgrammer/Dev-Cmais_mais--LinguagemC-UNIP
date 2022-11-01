/*
	37.Escreve um programa que verifique quais números entre 1000 e 9999 (inclusive) possuem a
	propriedade	seguinte: a soma dos dois dígitos de mais baixa ordem com os dois dígitos de mais
	alta ordem elevada ao quadrado é igual ao próprio número. Por exemplo, para o inteiro 3025,
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
