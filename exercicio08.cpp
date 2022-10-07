/**Faça o programa que apresenta a seguinte saída, perguntando ao usuário o númeromáximo (no exemplo, 9). Este número deve ser sempre ímpar.
1 2 3 4 5 6 7 8 9
 2 3 4 5 6 7 8
   3 4 5 6 7
     4 5 6
       5
**/


#include <stdio.h>

int main(){
    int num, i, linha;

    printf("Digite o numero maximo que voce quer que o programa mostre: ");
    scanf("%d", &num);

    if (num % 2==0){
       printf("Numero invalido, digite um numero IMPAR!!!!\n");
    } else{
        for( i = 0; i<= (num / 2) + 1; i++){
            for (linha=i+1; linha<=num-i; linha++ ){
                printf("%d ", linha);
            }
            printf("\n");
            for (linha=0; linha<(i+1)*2; linha++){
              printf(" ");
            }
         }
    }
}
