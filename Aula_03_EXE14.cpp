#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");	//idioma em português
	
	int idade;
	
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	
	if(idade > 40)
	{
		printf("É amigo, já era, tem que fazer o exame de próstata...\n");
	}
	else
	{
		printf("Você não precisa fazer o exame de próstata... ainda\n");
	}
}
