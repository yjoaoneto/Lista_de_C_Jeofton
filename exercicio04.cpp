//Fa�a um programa que l� dois valores e imprime:
//se o primeiro valor for menor que o segundo, a lista de valores do primeiro at� o segundo
//se o primeiro valor for menor que o segundo a lista de valores do segundo at� o primeiroem ordem decrescente
//se ambos forem iguais a mensagem "valores iguais"



#include <stdio.h>

int main(){

	//definindo as vari�veis
	int num1,num2;

	//entrada
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);

	//processamento e sa�da
	if (num1 > num2)
	{
		printf("%d - %d", num1,num2);
	}

	else if (num1 < num2)
	{
		printf("%d - %d", num2,num1);
	}

	else if (num1 == num2)
	{
		printf("Os valores digitados sao iguais.");
	}

	return(0);
}
