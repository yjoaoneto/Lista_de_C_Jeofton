/**Escreva um programa que leia um n�mero na base decimal e em seguida imprima essemesmo n�mero nas bases octal e hexadecimal.  **/



#include <stdio.h>
#include <conio.h>

int main(){

	//definindo a vari�vel
	int num;

	//entrada
	printf("Digite um numero qualquer: ");
	scanf("%d", &num);

	//processamento e sa�da
	printf("O numero em octal eh: %o", num);
	printf("\nO numero em hexadecimal eh: %x", num);

	return(0);
}

