/* Dados um n�mero natural n, exiba seu fatorial n! */


#include <stdio.h>

int main ()
{
	//definindo as vari�veis
	int fatorial,num;
	
	//entrada
	printf("Digite um numero natural para saber seu fatorial: ");
	scanf("%d",&num);
	
	//processamento
	for (fatorial=1;num>1;num=num-1)
	{
		fatorial=fatorial * num;
	}
	
	//sa�da
	printf("Fatorial calculado: %d ",fatorial);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
