/* Faça um programa que receba um número inteiro e que verifique se esse número é par ou ímpar.
O programa deve informar se o número é par, caso afirmativo informar também se é ou não maior que 15 ou se o número é ímpar,
caso afirmativo informar se é ou não menor que 50  */

#include <stdio.h>

int main()
{
//definindo a única variável
int numero;

//entrada
 printf("Digite um numero inteiro:");
 scanf("%d",&numero);
 
 
//processamento e saída
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
