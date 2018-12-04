#include <stdio.h>
#include <stdlib.h>


void main(){

  int i, n, *vetor;
  printf("Tamanho: ");
  scanf("%i", &n);

  vetor = (int *) malloc (n * sizeof(int));

  for(i = 0; i < n; i++){
    scanf("%i", &vetor[i]);
  }

  for(i = 0; i < n; i++){
    printf("%i\n", vetor[i]);
  }

free(vetor);
}
