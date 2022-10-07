/* Faça um programa que lê um conjunto de 10 valores inteiros e verifica se
algum dos valores são igual a média dos mesmos. */

#include <stdio.h>

int main()
{
	//definindo as variáveis
   int num[10], soma=0, media,i;
   
   
   //entrada e processamento
   for(i=0; i<10; i++){
       printf("Digite um valor: ");
       scanf("%d", &num[i]);
       soma += num[i];
   }
   media = soma/10;
   
   
   //saída
    for(i=0; i<10; i++){
        if(media == num[i]){
            printf("O numero na posicao %d eh igual a media\n", i);
        }
    }
}
