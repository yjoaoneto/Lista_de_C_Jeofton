/* Fa�a um programa que receba um n�mero inteiro e que verifique se esse n�mero � par ou �mpar.
O programa deve informar se o n�mero � par, caso afirmativo informar tamb�m se � ou n�o maior que 15 ou se o n�mero � �mpar,
caso afirmativo informar se � ou n�o menor que 50  */

#include <stdio.h>

int main()
{
//definindo a �nica vari�vel
int numero;

//entrada
 printf("Digite um numero inteiro:");
 scanf("%d",&numero);
 
 
//processamento e sa�da
 if (numero%2==0)
 {
     printf("O numero eh par");
     if (numero>=15){
         printf("\nO numero eh maior que 15");
     }
     else{
         printf("\nO numero eh menor do que 15");
     }
     
 }
 else
 {
     printf("O numero eh inpar");
     if (numero<=50){
         printf("\nO numero eh menor do que 50");
     }
     else{
         printf("\nO numero eh maior do que 50");
     }
     
 }


}
