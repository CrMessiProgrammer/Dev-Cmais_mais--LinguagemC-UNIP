#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");	//idioma em portugu�s
	
	int idade;
	
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	
	if(idade > 17)
	{
		printf("Voc� � maior de idade, pode entrar! \n");
	}
	else
	{
		printf("Sinto muito, voc� n�o pode entrar\n");
	}
}
