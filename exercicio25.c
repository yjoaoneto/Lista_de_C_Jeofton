/* Fa�a um programa que l� um conjunto de 10 valores inteiros e verifica se
algum dos valores s�o igual a m�dia dos mesmos. */

#include <stdio.h>

int main()
{
	//definindo as vari�veis
   int num[10], soma=0, media,i;
   
   
   //entrada e processamento
   for(i=0; i<10; i++){
       printf("Digite um valor: ");
       scanf("%d", &num[i]);
       soma += num[i];
   }
   media = soma/10;
   
   
   //sa�da
    for(i=0; i<10; i++){
        if(media == num[i]){
            printf("O numero na posicao %d eh igual a media\n", i);
        }
    }
}
