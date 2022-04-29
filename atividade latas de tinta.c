#include <stdio.h>
#include <stdlib.h>
int main(void){
        float altura, comprimento, litros, rendimento;
        float auxiliararea, litrosnecessarios, quantidadelatas;

            printf("informe a altura da parede\n");
            scanf("%f", &altura);
            printf("informe o comprimento da parede\n");
            scanf("%f", &comprimento);
            printf("informe quantos litros possui uma lata(volume)\n");
            scanf("%f", &litros);
            printf("informe o rendimento de cada lata, de acordo com seu rotulo, em metros quadrados por litro\n");
            scanf("%f", &rendimento);

                auxiliararea=(comprimento*altura);
                litrosnecessarios=(auxiliararea/rendimento);
                quantidadelatas=(litrosnecessarios/litros);

            printf("a quantidade de latas necessarias eh %f", quantidadelatas);





















    return 0;
}
