/* 
	3.Escreva um programa que pergunte o raio de uma circunfer�ncia, e em seguida o di�metro,
	comprimento e �rea da circunfer�ncia.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");	//idioma em portugu�s
	
	float raio,diametro,comprimento,area;
	
	printf("Digite o raio da circunfer�ncia: ");
	scanf("%f",&raio);
	
	diametro = (2 * raio);
	comprimento = (3.14 * diametro);
	area = (3.14 * raio * raio);
	
	printf("Di�metro %.2f.\n",diametro);
	printf("Comprimento %.2f.\n",comprimento);
	printf("�rea %.2f.\n",area);	
}
