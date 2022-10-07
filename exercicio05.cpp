//Escreva um programa que imprime a tabela ASCII (código decimal, código hexa, caractere)para os códigos de 0 a 127.


#include <stdio.h>

int main(){

	//definindo a variável
	int i;

	//processamento e saída
	for(i = 0;i < 255; i++){

		if (i % 10 == 0)
			printf("\n");
			printf("%d = %c\t",i,i);

	}

	return(0);
}
