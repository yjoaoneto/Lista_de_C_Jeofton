/* Escreva um programa que solicite seis n�meros do tipo inteiro ao usu�rio e os armazene
em um vetor, depois o programa dever�o apresentar na tela os n�meros na ordem inversa do
qual foram digitados. */

#include <stdio.h>

int main(){
	
	//definindo as vari�veis
    int num[6], soma=0, subtracao=0, i;

	//entrada e processamento
    for( i=0; i<6; i++){
        printf("Digite um numero: ");
        scanf("%d", &num[i]);
        }
	
	//sa�da
    printf("Ordem inversa: [");
    for( i=5; i>0; i--){
        printf("%d,", num[i]);
    }
    printf("%d]", num[0]);

}
