/*
	19.Faça um programa que leia uma matriz de 5 linhas e 4 colunas contendo as seguintes informações
	sobre alunos de uma disciplina, sendo todas as informações do tipo inteiro:
	•Primeira coluna: número de matrícula (use um inteiro)
	•Segunda coluna: média das provas
	•Terceira coluna: média dos trabalhos
	•Quarta coluna: nota final
	Elabore um programa que:
	a)Leia as três primeiras informações de cada aluno
	b)Calcule a nota final como sendo a soma da média das provas e da média dos trabalhos
	c)Imprima a matrícula do aluno que obteve a maior nota final (considere que só existeuma maior nota)
	d)Imprima a média aritmética das notas finais
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
