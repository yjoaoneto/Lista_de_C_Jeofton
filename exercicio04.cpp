//Faça um programa que lê dois valores e imprime:
//se o primeiro valor for menor que o segundo, a lista de valores do primeiro até o segundo
//se o primeiro valor for menor que o segundo a lista de valores do segundo até o primeiroem ordem decrescente
//se ambos forem iguais a mensagem "valores iguais"



#include <stdio.h>

int main(){

	//definindo as variáveis
	int num1,num2;

	//entrada
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);

	//processamento e saída
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
