/* Desenvolva um programa para comparar a idade de Pedro, de Joana e de Ismael e informar quem � o mais velho.
Considere que essas pessoas possuem idades diferentes. */

#include <stdio.h>
#include <string.h>

int main(){
	
	//definindo as vari�veis
     int num[10];
     int maxi,menos;
     char nomevelho[10],nomenovo[10];
     char listnomes[4][6] = {{"Pedro"},{"Joana"},{"Ismael"}};

	//entrada e processamento
     for (int i = 0; i<3; ++i){
        printf("Digite a idade de %s: ",listnomes[i]);
        scanf("%d",&num[i]);
        printf("\n\n");

        if(i == 0){
            menos =num[0];
            maxi = num[0];
            strcpy (nomenovo, listnomes[i]);
            strcpy (nomevelho, listnomes[i]);

        }else if( maxi < num[i]){
            maxi=  num[i];
            strcpy (nomevelho, listnomes[i]);
        }
        if(menos > num[i]){
            menos = num[i];
            strcpy (nomenovo, listnomes[i]);

        }
     }

	//sa�da
     printf("O maior idade e %d o nome do individuo %s\n",maxi,nomevelho);
     printf("A menor idade e %d o nome do individuo  %s",menos,nomenovo);

