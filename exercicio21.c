/* Escreva um programa que leia doze numeros do tipo inteiro ao usuário. Separe esses
números em pares e ímpares e os armazenem em dois outros vetores separando pares e
ímpares, exibindo os resultados na tela.*/

#include <stdio.h>

int main(){
	
	//definindo as variáveis
    int par[12],impar[12],i;
    int num,contpar=0,contimpar=0;

	//entrada e processamento
    for( i = 0; i<12;i++){
        printf("digite um numero: ");
        scanf("%d",&num);
        if(num%2 == 0){
            par[contpar] = num;
            contpar++;
        }else{
            impar[contimpar] = num;
            contimpar++;

        }
    }

	//saída
    printf("[");
    for(i = 0; i<contimpar-1;i++){
        printf("%d,",impar[i]);
    }
    printf("%d]",impar[contimpar-1]);
   
     printf("[");
    for( i = 0; i<contpar-1;i++){
        printf("%d,",par[i]);
    }
    printf("%d]",par[contpar-1]);

}
