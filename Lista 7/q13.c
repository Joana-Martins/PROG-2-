#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sumArray(int *vet1, int n1, int *vet2, int n2, int **resultado){

  if(n1 != n2){
    printf("OS VETORES TEM QUE TER MESMO TAMANHO!");
    return 0;
  }

  int *vet3;
  vet3 = (int *) malloc (n1 * sizeof(int));

  for( int i = 0; i < n1; i++){
    vet3[i] =  vet1[i] + vet2[i];
  }

  *resultado = vet3;
  return 1;
}

void main(){
  int vetor1[5] = {1, 3, 5, 6, 3};
  int vetor2[5] = {3, 5, 6, 1, 1};
  int *vetor3;

  if(!(sumArray(vetor1, 5, vetor2, 5, &vetor3))){
    exit(0);
  }

  for(int i = 0; i < 5; i++){
    printf("%i\n", vetor3[i]);
  }

  free(vetor3);
}
