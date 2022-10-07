/**Faça um programa que lê o preço de um produto e inflaciona esse preço em 10% se elefor menor que 100 e em 20% se ele for maior ou igual a 100.
OBS: não use o comando "if" ou o operador de condição "?".**/



#include <stdio.h>

int main(){

	//definindo as variáveis
	int i;
	float preco,inflacao,precofinal;
	i = 100;

	//entrada
	printf("Digite o preco do seu produto: ");
	scanf("%f", &preco);

	//processamento
	for(i = 0; i < 100 ; i++){
		inflacao = 10;
	}

	for(i = 0;i >= 100 ; i++){
		inflacao = 20;
	}

	precofinal = (preco + (preco * inflacao/100));

	//saída
	printf("O valor final eh de: %.2f", precofinal);

	return(0);

}


