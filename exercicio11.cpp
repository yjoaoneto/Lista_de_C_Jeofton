/* Codifique um programa que leia a quantidade de alunas e de alunos.
Depois esse programa deve informar se essa turma possui mais alunos ou mais alunas.
Se essa turma possuir a quantidade de alunas maior que a de alunos, informe o total de alunos dessa turma.
O programa deve verificar se a quantidade de alunos é igual a de alunas */


#include <stdio.h>

int main()
{
//definindo as variáveis
	int alunos,alunas,total;
	
//entrada	
	printf("Digite a quantidade de alunos: ");
	scanf("%d",&alunos);
	printf("Digite a quantidade de alunas: ");
	scanf("%d",&alunas);
	total = alunos + alunas;
//processamento
	if (alunos>alunas)
	{
		printf("A sala tem mais alunos! ");
		printf("\nA sala tem um total alunos de: %d",total);
	}
	else if (alunas>alunos)
	{
		printf("A sala tem mais alunas! \n");
		printf("A sala tem um total alunos de: %d",total);
	}
	else if (alunos==alunas)
	{
		printf("A quantidade de alunos e alunas sao iguais \n");
		printf("A sala tem um total alunos de: %d",total);
    }
//saida

}
