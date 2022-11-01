/*
	Algoritmo em linguagem C que dada uma temperatura em graus Celsius
	converte-a em kelvin
	Fórmula:
	
	C = K - 273.15
*/

#include <stdio.h>
#include <math.h>

int main(){
	float celsius, kelvin;
	
	printf("Digite a temperatura em graus kelvin:");
	scanf("%f",&kelvin);
	
	celsius = kelvin - 273.15;
	
	printf("A temperatura %f kelvin eh igual %f graus celsius", kelvin, celsius);
		
}
