/* Dado um n�mero positivo, crie um programa que escreva todos os n�meros �mpares menores e/ou iguais a esse n�mero e maiores ou igual a um. */

#include <stdio.h>

int main(){
	
	//definindo a vari�vel
    int num;
    
    //entrada e processamento
    printf("digite um numero: ");
    scanf("%d",&num);
    for(int i = 1; i<= num; i++){
        if (i%2 != 0){
            printf("%d ",i);
        }

    }

}
