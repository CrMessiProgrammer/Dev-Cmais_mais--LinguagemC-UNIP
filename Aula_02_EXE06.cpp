/*
	Algoritmo em linguagem C que dada uma temperatura em graus Celsius
	converte-a em fahrenheit
	Fórmula:
	
	F = C * (9.0/5.0) + 32.0	
*/

#include <stdio.h>
#include <math.h>

int main(){
	
	float celsius, fahrenheit;
	
	printf("Digite a temperatura em graus Celsius:");
	scanf("%f",&celsius);
	
	fahrenheit = celsius * (9.0/5.0) + 32.0;
	
	printf("A temperatura de %.1f celsius, equivale a temperatura de %.1f fahrenheit", celsius,fahrenheit);	
	
}
