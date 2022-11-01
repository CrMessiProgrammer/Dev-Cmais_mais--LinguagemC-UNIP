/*
	19.Fa�a um programa que leia uma matriz de 5 linhas e 4 colunas contendo as seguintes informa��es
	sobre alunos de uma disciplina, sendo todas as informa��es do tipo inteiro:
	�Primeira coluna: n�mero de matr�cula (use um inteiro)
	�Segunda coluna: m�dia das provas
	�Terceira coluna: m�dia dos trabalhos
	�Quarta coluna: nota final
	Elabore um programa que:
	a)Leia as tr�s primeiras informa��es de cada aluno
	b)Calcule a nota final como sendo a soma da m�dia das provas e da m�dia dos trabalhos
	c)Imprima a matr�cula do aluno que obteve a maior nota final (considere que s� existeuma maior nota)
	d)Imprima a m�dia aritm�tica das notas finais
*/

#include <stdio.h>
#include <math.h>

int main()
{
	float aluno[5][4];
	int i;
	float numero;
	
	for( i=0 ; i<5 ; i++)
	{
		printf("\nDigite a matricula do aluno %d: ", i);
		scanf("%f", &aluno[i][0]);
		setbuf(stdin, NULL);
		
		printf("\nDigite a nota da prova do aluno %d: ", i);
		scanf("%f", &aluno[i][1]);
		setbuf(stdin, NULL);
		
		printf("\nDigite a nota dos trabalhos do aluno %d: ", i);
		scanf("%f", &aluno[i][2]);
		setbuf(stdin, NULL);
		
		aluno[i][3] = (aluno[i][1] + aluno[i][2])/2.0;
		float media = (aluno[i][1] + aluno[i][2] + aluno[i][3])/3;
		
		printf("\nAluno %.0f com matricula %f", i, aluno[i][0]);
		printf("\nNota na prova = %.1f", aluno[i][1]);
		printf("\nTrabalhos = %.1f", aluno[i][2]);
		printf("\nSua nota final = %.1f\n", aluno[i][3]);
	}
	numero = aluno[0][3];
	
	for( i=0 ; i<5 ; i++)
	{
		if(numero < aluno[i][3])
		{
			numero = aluno[i][3];
		}
	}
	printf("\nA maior nota eh %f", numero);
	return 0;
}
