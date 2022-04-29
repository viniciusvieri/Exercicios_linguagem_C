#include <stdio.h>

int main(void){
        float nota1, nota2, nota3;
        float media;


            printf("insira a primeira nota, por favor.\n");
            scanf ("%f", &nota1);
            printf("insira a segunda nota, por favor.\n");
            scanf ("%f", &nota2);
            printf("insira a terceira nota, por favor.\n");
            scanf ("%f", &nota3);



            media = (nota1 + nota2 + nota3) /3;




            printf("sua nota eh: %f \n", media);



    return 0;
}
