/*20) Crie um programa capaz de ler dois nomes de pessoas e imprimí-los em ordem alfabetica.*/

#include <stdio.h>
#include <string.h>

int main()
{
	//definindo as variáveis de string
    char nome1[20],nome2[20];
    
    //entrada
    printf("Digite o primeiro nome: ");
    scanf("%s", &nome1);
    printf("Digite o segundo nome: ");
    scanf("%s", &nome2);
	
	//processamento e saída
    if((int) nome1[0] < (int) nome2[0]){
        printf("%s    %s",nome1,nome2);
    }else{
        printf("%s    %s",nome2,nome1);
    }
}
