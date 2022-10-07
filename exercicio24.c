/* Codifique um programa que indique a quantidade m�nima de c�dulas equivalente a uma
dada quantia. Considere apenas valores inteiros e c�dulas de 1, 5, 10, 20, 50 e 100 reais.*/

#include <stdio.h>

int main(){
	
	//definindo as vari�veis
    int valor, total, cred, totalcred;
    
    //entrada
    printf("Digite a quantia que voce deseja sacar: ");
    scanf("%d", &valor);
    total = valor;
    cred = 100;
    totalcred = 0;

	//processamento e sa�da
    while (1){
        if (total >= cred){
            total-= cred;
            totalcred += 1;
        }else{
            printf("O total de celulas foi de %d de R$%d\n", totalcred, cred);
            if(cred ==100){
                cred = 50;
            }else if (cred == 50){
                cred = 20;
            }else if (cred == 20) {
                cred = 10;

            }else if (cred ==10){
                cred = 5;
            }else if(cred == 5){
                cred =1;
            }
            totalcred = 0;
            if (total == 0){
                break;
            }
        }
    }
}
