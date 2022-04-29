#include <stdio.h>
#include <stdlib.h>

int main(void){

    float num1, num2;

        printf("Por favor informe o primeiro numero.\n");
            scanf ("%f", &num1);

        printf("Por favor informe o segundo numero.\n");
            scanf ("%f", &num2);
        if    (num1==num2){
            printf("os numeros sao iguais, mostrando um deles %f", num1);
        }
        if    (num2<num1){
               printf("o menor numero eh %f", num2);
        }
        if    (num2>num1){
               printf("o menor numero eh %f", num1);
        }





return 0;
}











