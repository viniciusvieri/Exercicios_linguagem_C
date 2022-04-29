#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void){
    float a, b, c;

    float delta, x1, x2;

    printf("digite o valor de a.\n");
        scanf("%f", &a);
    printf("digite o valor de b.\n");
        scanf("%f", &b);
    printf("digite o valor de c.\n ");
        scanf("%f", &c);

    if (a == 0){
        printf("os coeficientes escolhidos nao satisfazem uma equacao de segundo grau, desculpe.\n");

        }else{
        delta = b*b - 4*a*c;
        if (delta < 0){
            printf("a equacao nao possui raizes reais (delta = %.1f).\n", delta);
        }else{
            x1=(-b + sqrt(delta))/(2*a);
            x2=(-b - sqrt(delta))/(2*a);

    printf("suas raizes sao, respectivamente, x1 = %.1f, x2 = %.1f\n", x1, x2);
        }
    }

    return 0;
}
