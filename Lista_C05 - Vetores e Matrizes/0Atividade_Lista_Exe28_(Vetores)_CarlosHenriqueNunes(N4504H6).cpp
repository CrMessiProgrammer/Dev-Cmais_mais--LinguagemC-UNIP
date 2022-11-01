/*
	28.Leia 10 n�meros inteiros e armazene em um vetor v. Crie dois novos vetores v1 e v2.
	Copie os valores �mpares de v para v1, e os valores pares de v para v2. Note que cada um dos
	vetores v1 e v2 tem no m�ximo 10 elementos, mas nem todos os elementos s�o utilizados.
	No final escreva os elementos UTILIZADOS de v1 e v2.
*/

#include <stdio.h>
#include <stdlib.h> 
#include <locale.h> 

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int v[10],v1[10],v2[10], i,contP = 0, contI = 0; 
	
	printf ("Digite 10 valores inteiros:\n\n");
	
	for (i=0; i < 10; i++)
	{
		printf ("n�m[%d]: ", i + 1);
		scanf ("%d", &v[i]);
	}
	
	for(i=0; i<10; i++)
	{
		if(v[i] % 2 == 0)
		{
			v1[contP] = v[i]; 
			contP++;
		}
		
		if(v[i] % 2 != 0)
		{
			v2[contI] = v[i]; 
			contI++;
		}
	}
	printf("\nOs n�meros pares s�o:\n"); 
	for(i=0; i<contP; i++)
	{
		printf("-> %d\n", v1[i]);
	}
	printf("\n\nOs n�meros �mpares s�o:\n"); 
	for(i=0; i<contI; i++)
	{
		printf("-> %d\n", v2[i]); 
	}
} 
