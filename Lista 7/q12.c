#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int negativos(float *vet, int N){
  int qtd = 0;

  for(int i = 0; i < N; i++){
    if(vet[i] < 0){
      qtd++;
    }
  }

  return qtd;
}


void main (){

  int neg;
  float vetot[10] = { -6, 78, -9, -4, -5, 3, 7, 9, 10, 33};

  neg = negativos(vetot, 10);
  printf("%i \n", neg);
}
