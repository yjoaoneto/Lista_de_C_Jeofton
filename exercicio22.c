/* Desenvolva um programa que leia dez n�meros do tipo inteiro ao usu�rio armazene esses
dez n�meros em um vetor. Para os valores dos elementos inseridos nas posições pares desse
vetor, calcule o somat�rio deles, para os demais calcule a subtr��o desses valores. Em
seguida, o programa dever� apresentar na tela os resultados.*/

#include <stdio.h>

int main(){
	
	//definindo as vari�veis
    int num[10], soma=0, subtracao=0, i;


	//entrada e processamento
    for( i=0; i<10; i++){
        printf("Digite um numero: ");
        scanf("%d", &num[i]);


        if(i%2 == 0){
            soma += num[i];
        }else{
            subtracao -= num[i];

        }
    }
    printf("A soma dos valores em posicoes pares sao %d e a subtracao dos valores em posicoes impares sao %d", soma, subtracao);
}
