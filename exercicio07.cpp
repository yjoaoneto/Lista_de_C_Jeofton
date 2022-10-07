/**Implemente um programa que solicita as notas das duas provas feitas por cada um dosalunos de uma turma (as notas têm de estar no intervalo [0 10]) e imprime para cada um amédia das notas.
O programa deve parar imediatamente após ter sido digitado o valor 50 paraa nota da primeira prova.  **/


#include <stdio.h>

int main(){


    //definindo as variáveis
    float num1,num2,media;
    num1 = 1;

    //entrada e processamento
    printf("Digite notas de 1-10 para o programa ser validado.\n");
    printf("Para parar o programa, digite o numero 50 na primeira nota.\n");
    while(num1 != 0 ){
        printf("Digite a primeira nota: ");
        scanf("%f", &num1);
        if(num1 == 50){
                break;
            }
        if((num1 >= 1) && (num1 <= 10)){
             printf("Digite a segunda nota: ");
            scanf("%f", &num2);
            if((num2 >= 1) && (num2 <= 10)){
                media = (num1 + num2) / 2;
                printf("Sua media eh: %.2f\n", media);
            }

        }

        else{
            printf("Numero invalido\n");
        }


}

    return(0);
}
