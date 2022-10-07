/** Faça um programa que solicite 2 números e informe:
a soma dos números, o produto doprimeiro número pelo quadrado do segundo,
o quadrado do primeiro número, a raiz quadradada soma dos quadrados,
o seno da diferença do primeiro número pelo segundo e O módulodo primeiro número.**/


#include <stdio.h>
#include <math.h>
#define pi 3.14

int main(){

	//definindo as variáveis
	float num1,num2,raiz,soma,quadra1,quadra2,somaquadra,equacao1,diferenca,seno,modulo;

	//entrada
	printf("Digite o primeiro numero: ");
	scanf("%f", &num1);
	printf("\nDigite o segundo numero: ");
	scanf("%f", &num2);

	//processamento
	soma = num1 + num2;
	quadra1 = pow(num1,2);
	quadra2 = pow(num2,2);
	diferenca = num1 - num2;
	somaquadra = quadra1 + quadra2;
	raiz = sqrt(somaquadra);
	equacao1 = num1 * quadra2;
	seno = sin(diferenca * pi/180);
	modulo = abs(num1);

	//saída
	printf("\nA soma dos numeros eh: %.2f", soma);
	printf("\nO produto do primeiro numero pelo quadrado do segundo eh: %.2f", equacao1);
	printf("\nO quadrado do primeiro numero eh: %.2f", quadra1);
	printf("\nA raiz quadradada da soma dos quadrados eh: %.2f", raiz);
	printf("\nO seno da diferença do primeiro numero pelo segundo eh: %.2f", seno);
	printf("\nO modulo do primeiro numero eh: %.2f", modulo);

	return(0);
}
