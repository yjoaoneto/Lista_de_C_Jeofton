/* Faça um programa C que leia dez números que representam as notas de dez alunos de uma disciplina.
As notas variam de zero até dez (0 a 10).
O programa deve validar a entrada de dados e obter: a soma das notas, a média das notas, a maior nota, a menor nota.
Assuma que as notas são informadas corretamente no intervalo de 1 a 10. */

#include <stdio.h>

int main(){
	
	//definindo as variáveis
	int soma, maior, menor, numero,i;
	
	
	//entrada
	printf("Entre com a 1a nota: ");
 	scanf("%i", &numero); 
 	
 	maior=numero;
 	menor=numero;
 	soma += numero;
 	
 	//processamento	e saída
	if (numero<=10){
		for(i=1; i<10; i++){
 		printf("\nEntre com a %da nota: ",i+1);
 		scanf("%i", &numero);
 		soma += numero;

 		if(numero>maior)
 			maior=numero;
 		else
 			if(numero<menor)
 				menor=numero;
 		} 
 		
 	float media = (float) soma / 10;
	printf("Media das notas eh : %.2f\n", media);
 
 	printf("\nA menor nota entre os alunos foi: %d", menor);
	printf("\nA maior nota entre os alunos: %d", maior);
	printf("\nA soma das notas eh: %i", soma);
		
	}
	else{
		printf("Por favor digite um numero entre 0 a 10");
	}
	
}
