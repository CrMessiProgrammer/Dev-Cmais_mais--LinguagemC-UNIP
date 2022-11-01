#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");	//idioma em português
	
	int idade;
	
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	
	if(idade > 17)
	{
		printf("Você é maior de idade, pode entrar! \n");
	}
	else
	{
		printf("Sinto muito, você não pode entrar\n");
	}
}
