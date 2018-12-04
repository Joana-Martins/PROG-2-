#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void imprime_vetor(int *vetor, int n){

  int i;
  for (i = 0; i < n; i++){
    printf("%i", vetor[i]);
  }

  printf("\n");
}

void ler_vetor(int *vetor, int n){

  int i;
  for( i = 0; i < n; i++){
    printf("Posição %i: ", i+1);
    scanf(" %i", &vetor[i]);
    printf("\n");
  }
}


void main(){

  int *vetor, n = 5, i;
  ler_vetor(vetor, n);

  for (i = 0; i < n; i++){
    vetor[i] =  vetor[i] * 2;
  }

  imprime_vetor(vetor, n);
}
