/* 
	4.Para doar sangue � necess�rio ter entre 18 e 67 anos. Fa�a um aplicativo na linguagem C
	que pergunte a idade de uma pessoa e diga se ela pode doar sangue ou n�o. Use alguns dos
	operadores l�gicos OU(||) e E(&&).
*/

#include <stdio.h>
#include <locale.h>

/*
	Operadores l�gicos
	|| -> OU
	&& -> E	
*/
int main()
{
	setlocale(LC_ALL,"Portuguese");	//idioma em portugu�s
	
	int idade;
	
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	
	if(idade > 18 && idade < 67)
	{
		printf("Parab�ns, voc� est� aprovado para doar sangue.\n");
	}
	else
	{
		printf("Sinto muito,voc� n�o pode doar sangue.\n");
	}
}
