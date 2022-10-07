/* Desenvolva um programa que leia dez números do tipo inteiro ao usuário armazene esses
dez números em um vetor. Para os valores dos elementos inseridos nas posiÃ§Ãµes pares desse
vetor, calcule o somatório deles, para os demais calcule a subtrção desses valores. Em
seguida, o programa deverá apresentar na tela os resultados.*/

#include <stdio.h>

int main(){
	
	//definindo as variáveis
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
