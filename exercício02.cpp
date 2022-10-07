/**Crie um programa que receba o valor da temperatura em Fahrenheit e imprime ocorrespondente em Celsius e em Kelvin:**/


#include <stdio.h>

int main(){

	//definindo as variáveis
	float f,c,k;

	//entrada
	printf("Digite o valor de graus em Fahrenheit para serem convertidos: ");
	scanf("%f", &f);

	//processamento
	c = (f - 32) * 5/9;
	k = (f - 32) * 5 / 9 + 273.15;

	//saída
	printf("O valor convertido para Celsius eh: %.3f", c);
	printf("O valor convertido para Kelvin eh: %.3f", k);

	return(0);
}
