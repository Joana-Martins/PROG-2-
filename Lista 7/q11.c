#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int big_number(int n, int array[n], int *maior_numero, int *pertence){

  int i, maior, repete = 1;

  for ( i = 0; i < n; i++){
    if(i == 0){
      maior = array[i];
    }
    else{
      if(array[i] == maior){
        repete++;
      }
      else if(array[i] > maior){
        maior = array[i];
        repete = 1;
      }
    }
  }
  *maior_numero = maior;
  *pertence = repete;
}


void main(){

  int maior_numero, repete;
  int vetor[9] = {4, 78, 4, 9 , 23, 99, 99, 99, 7};

  big_number(9, vetor, &maior_numero, &repete);

  printf("O maior numero %i se repete %i vezes\n", maior_numero, repete);

}
