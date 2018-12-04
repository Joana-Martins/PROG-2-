#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void criaMatriz(int **matriz, int n, int m){

  int num, i, j;

  for(i = 0; i < n; i++){
    for( j = 0; j < m; j++){
      printf("(%i, %i)", i+1, j+1);
      scanf("%i", &num);
      matriz[i][j] = num;
    }
  }
}

void freeMatriz(int **matriz, int n){

  for(int i = 0; i < n; i++){
    free(matriz[i]);
  }
  free(matriz);
}

void somar_matriz(int **matriz1, int **matriz2, int **soma, int n, int m){

  int i, j;
  for(i = 0; i < n; i++){
    for(j = 0; j < m; j++){
      soma[i][j] = matriz1[i][j] + matriz2[i][j];
    }
  }
}

void printaMatriz(int **matriz, int n, int m){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      printf(" %i", matriz[i][j]);
    }
    printf("\n");
  }
}

void main(){

  int n, m;
  int **matriz1, **matriz2, **soma;

  printf( "Digite a dimenção das matrizes: ");
  scanf("%i %i", &n, &m);

  matriz1 = (int **) malloc(n * sizeof(int *));

for(int i = 0; i<n; i++){
    matriz1[i] = (int *) malloc(m * sizeof(int));
}

matriz2 = (int **) malloc(n * sizeof(int *));

for(int i = 0; i<n; i++){
    matriz2[i] = (int *) malloc(m * sizeof(int));
}

soma = (int **) malloc(n * sizeof(int *));

for(int i = 0; i<n; i++){
    soma[i] = (int *) malloc(m * sizeof(int));
}
  printf("Digite os valores da primeira matriz: ");
  criaMatriz(matriz1, n, m);

  printf("Digite os valores da segunda matriz: ");
  criaMatriz(matriz2, n, m);

  somar_matriz(matriz1, matriz2, soma, n, m);

  printaMatriz(soma, n, m);

  freeMatriz(matriz1, n);
  freeMatriz(matriz2, n);
  freeMatriz(soma, n);
}
