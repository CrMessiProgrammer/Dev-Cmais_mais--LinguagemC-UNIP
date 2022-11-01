/*
	26.O c�digo de C�sar � uma das mais simples e conhecidas t�cnicas de criptografia.
	� um tipo de substitui��o na qual cada letra do texto � substitu�da por outra,
	que se apresenta no alfabeto abaixo dela um n�mero fixo de vezes. Por exemplo,
	com uma troca de tr�s posi��es, �A� seria substitu�do por �D�, �B� se tornaria �E�,
	e assim por diante. Implemente um programa que fa�a uso desse C�digo de C�sar (3 posi��es),
	entre com uma string e retorne a string codificada. Exemplo:
	String: a ligeira raposa marrom saltou sobre o cachorro cansado
	Nova string: D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char texto[1000];
    int i;
    
    printf("Digite sua frase para criptografia: ");
    scanf(" %999[^\n]", texto);
    getchar();
    
    for(i=0; texto[i] != '\0'; i++)
	{
		if (isalpha(texto[i]))
		{
			texto[i] = toupper(texto[i]) + 3;
            if (texto[i] > 'Z')
			{
				texto[i] = texto[i] - 'Z' + 'A' - 1;
            }
        }
    }
    printf("%s", texto);
    return 0;
}
