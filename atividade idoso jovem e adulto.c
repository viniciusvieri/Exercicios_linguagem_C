#include <stdio.h>
#include <stdlib.h>

int main(void){


		int idade;
        int num;

 		printf("diga sua idade.\n");
		scanf("%d", &idade);
                if (idade<=17) {
                        printf("Voce eh considerado jovem.\n");
                }
                if (idade>=60){
                        printf("voce eh considerado idoso.\n");
                }
                if (idade>=18 && idade<=59){
                        printf("voce eh considerado adulto.\n");
                }









    return 0;
}
