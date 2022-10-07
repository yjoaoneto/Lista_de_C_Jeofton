/* Escreva um programa que solicite seis números do tipo inteiro ao usuário e os armazene
em um vetor, depois o programa deverão apresentar na tela os números na ordem inversa do
qual foram digitados. */

#include <stdio.h>

int main(){
	
	//definindo as variáveis
    int num[6], soma=0, subtracao=0, i;

	//entrada e processamento
    for( i=0; i<6; i++){
        printf("Digite um numero: ");
        scanf("%d", &num[i]);
        }
	
	//saída
    printf("Ordem inversa: [");
    for( i=5; i>0; i--){
        printf("%d,", num[i]);
    }
    printf("%d]", num[0]);

}
