#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");	//idioma em portugu�s
	
	int idade;
	
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	
	if(idade > 40)
	{
		printf("� amigo, j� era, tem que fazer o exame de pr�stata...\n");
	}
	else
	{
		printf("Voc� n�o precisa fazer o exame de pr�stata... ainda\n");
	}
}
