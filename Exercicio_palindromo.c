#include <stdio.h>
#include <unistd.h>
    
    int palindromo(int array[], int comeco, int fim){

	    if(comeco >= fim){
	  	  return 1;
	    } 
	    if(array[comeco] == array[fim]){
        return palindromo(array, comeco + 1, fim - 1);
	      } else { 
		        return 0;
	        }
      }  

    int main(void){
  	  int N = 0;  
        printf("Olá! este é um verificador de Palíndromo.\n");
	      printf("Forneça o tamanho do array para verificar:\n ");
	        scanf("%d", &N);    
            int array[N];
        
	      for(int i = 0; i < N; i++){
		      printf("Forneça cada valor do array: ");
		        scanf("%d", &array[i]);
          }

	      for(int i = 0; i < N; i++){
		      printf("Posição[%d] -> %d\n", i, array[i]);
	        }

	      if(palindromo(array, 0, N - 1) == 1){
		      printf("Eba! É um palíndromo!\n");
	        } else {
	      	  printf("Ops! Não é um palíndromo!\n");
	        }
      
	  return(0);
    }