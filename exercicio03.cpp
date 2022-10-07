/**Escreva um programa que leia um número na base decimal e em seguida imprima essemesmo número nas bases octal e hexadecimal.  **/



#include <stdio.h>
#include <conio.h>

int main(){

	//definindo a variável
	int num;

	//entrada
	printf("Digite um numero qualquer: ");
	scanf("%d", &num);

	//processamento e saída
	printf("O numero em octal eh: %o", num);
	printf("\nO numero em hexadecimal eh: %x", num);

	return(0);
}

