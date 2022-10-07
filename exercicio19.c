/* Escreva um programa para informar o maior elemento de um vetor de 5 posições do tipo inteiro  */


#include <stdio.h>

#define TAM 5

int main(){
	
	//definindo as variáveis
	int vet[TAM], i, maior;
	
	//entrada 
	for(i=0; i<TAM; i++){
		printf("Digite um valor: ");
		scanf("%i", &vet[i]);
	}
	
	//processamento
	maior = vet[0];
	
	for(i=1; i<TAM; i++){
		if (vet[i] > maior){
			maior = vet[i];
		}
	}
	
	//saída
	printf("Vetores: ");
	for(i=0; i<TAM; i++){
		printf("%i ",vet[i]);
	}
	
	printf("\nO maior valor entre os vetores e: %i", maior);
	
}
