/* Escreva um programa que leia 3 notas de um aluno e a m�dia (ME) das notas dosexerc�cios realizados por ele.
Calcular a m�dia de aproveitamento, usando a f�rmula: MA =(N1 + N2*2 + N3*3 + ME)/7.
A partir da m�dia, informar o conceito de acordo com a tabela */


#include <stdio.h>

int main(){

	//definindo as vari�veis
	float nota1,nota2,nota3,media,maproveitamento;

	//entrada
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	printf("Digite a terceira nota: ");
	scanf("%f", &nota3);
	media = (nota1 + nota2 + nota3) / 3;
	maproveitamento = (nota1 + (nota2 * 2) + (nota3 * 2) + media) / 7;

	//processamento
	if(media >= 9)
		printf("Voce ficou com media A");

	else if(media >= 7.5 && media < 9)
		printf("Voce ficou com media B");

	else if(media >= 6 && media < 7.5)
		printf("Voce ficou com media c");

	else if(media >= 4 && media < 6)
		printf("Voce ficou com media D");

	else
		printf("Voce ficou com media E");

	printf("\nSua media de aproveitamento foi: %.1f", maproveitamento);



	return(0);
}
