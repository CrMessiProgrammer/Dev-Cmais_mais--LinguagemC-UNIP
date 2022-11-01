/* 
	3.Escreva um programa que pergunte o raio de uma circunferência, e em seguida o diâmetro,
	comprimento e área da circunferência.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");	//idioma em português
	
	float raio,diametro,comprimento,area;
	
	printf("Digite o raio da circunferência: ");
	scanf("%f",&raio);
	
	diametro = (2 * raio);
	comprimento = (3.14 * diametro);
	area = (3.14 * raio * raio);
	
	printf("Diâmetro %.2f.\n",diametro);
	printf("Comprimento %.2f.\n",comprimento);
	printf("área %.2f.\n",area);	
}
