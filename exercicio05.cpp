//Escreva um programa que imprime a tabela ASCII (c�digo decimal, c�digo hexa, caractere)para os c�digos de 0 a 127.


#include <stdio.h>

int main(){

	//definindo a vari�vel
	int i;

	//processamento e sa�da
	for(i = 0;i < 255; i++){

		if (i % 10 == 0)
			printf("\n");
			printf("%d = %c\t",i,i);

	}

	return(0);
}
