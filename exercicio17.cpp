/* O quadrado de um n�mero natural n � dado pela soma dos n primeiros n�meros �mpares consecutivos.
Por exemplo, 12=1, 22=1+3, 32=1+3+5, 42=1+3+5+7, etc.
Dado um n�mero n,calcule seu quadrado usando a soma de �mpares ao inv�s de produto */

#include <stdio.h>

int main ()
{
	
//definindo as vari�veis
int i, soma,n;

//entrada
 printf("Digite seu numero: ");
 scanf("%d",&n);
 soma=0;
 
//processamento
  for(i=0 ;i<n; i++)
  {
     soma = soma  + ((i *2) + 1);
  }
  
//sa�da 
 printf("%d",soma);
}
