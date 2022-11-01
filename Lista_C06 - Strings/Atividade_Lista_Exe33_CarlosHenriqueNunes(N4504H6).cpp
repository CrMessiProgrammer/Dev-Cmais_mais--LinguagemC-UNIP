/*
	33.Faça um programa para ler uma tabela contendo os nomes dos alunos de uma turma
	de 5 alunos. O programa deve solicitar ao usuário os nomes do aluno, sempre perguntando
	se ele deseja inserir mais um nome na lista. Uma vez lido todos os alunos, o usuário irá
	indicar um nome que ele deseja verificar se está presente na lista, onde o programa deve
	procurar pelo nome(ou parte deste nome) e se encontrar deve exibir na tela o nome completo
	e o índice do vetor onde está guardado este nome.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char alunos[5][30];
    char nome_procura[30];
    char perg;
    int loop=0;
    char *retorno;
    
	printf("\tTabela dos Alunos\n");
	
    for(int x=0;x<5;x++)
	{
		if(loop == 0)
		{
	        printf("\nDigite o nome completo do aluno: \n");
	        scanf("%s",&alunos[x]);
	        fflush(stdin);
	        if(x < 4)
	        {
	        	printf("Deseja inserir mais um nome? (S/N)\n");
				scanf("%c",&perg);
				fflush(stdin);
				
				if (perg ==('n' ||'N'))
	            loop=1;
        	}
      	}
	}
    printf("\nQual nome procura?\n");
    scanf("%s",&nome_procura);
    fflush(stdin);
    for (int x=0;x<4;x++)
	{
		if((retorno=strstr(alunos[x],nome_procura))!=NULL)
		{
			printf("\nNome completo: %s\n", alunos[x]);
            printf("O nome esta guardado na posicao: %d na lista", x);
        }
    }
}
