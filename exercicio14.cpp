/*  A convers�o de graus Fahrenheit para Celsius � obtida por Tc={(Tf-32)x(5/9)}, em que Tc � a temperatura em Celsius e Tf em Fahrenheit.
 Fa�a um programa C que calcule e que imprima uma tabela de graus Fahrenheit e graus Celsius, cujos graus variem de 40 a 75, de 1 em 1 */

#include <stdio.h>

int main()
{

	float tc;
	
	
 	printf("Fahrenheit ------ Celsius\n\n");
 //processsamento e sa�da
	for(float i = 40;i <=75; i++){
       	tc=((i-32)*5)/9;
       	
       	printf("%.2f  ------    %.2f\n",i,tc);



    }		



}
