/* Escreva um programa que leia doze numeros do tipo inteiro ao usu�rio. Separe esses
n�meros em pares e �mpares e os armazenem em dois outros vetores separando pares e
�mpares, exibindo os resultados na tela.*/

#include <stdio.h>

int main(){
	
	//definindo as vari�veis
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

	//sa�da
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
