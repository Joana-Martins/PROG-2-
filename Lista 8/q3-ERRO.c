#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cria_matriz(int **matriz, int n, int m){
  int num;

  for(int i = 0; i < n; i++){
    for( int j = 0; j < m; j++){
      printf("(%i, %i):", i+1, j+1);
      scanf(" %i", &num);
      matriz[i][j] = num;
    }
  }
}

void print_matriz(int **matriz, int n, int m){

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      printf("%i ", matriz[i][j]);
    }
    printf("\n");
  }
}

void maiores_num(int n, int m, int matriz[n][m], int *n1){
  int aux = 0;


  for (int i = 0; i < n; i++){
    for(int j = 0; j< m; j++){
        if (matriz[n][m] > aux){
          aux = matriz[n][m];
          printf(" aq: %i\n", aux);
        }
  }
}
*n1 = aux;

}

void main(){

  int n, m, maior1, maior2, maior3;
  int **matriz;

  printf("Digite a dimensão da matriz: ");
    scanf("%i %i", &n, &m);

  matriz = (int **) malloc(n * sizeof(int *));

  for(int i = 0; i<n; i++){
      matriz[i] = (int *) malloc(m * sizeof(int));
  }

  cria_matriz(matriz, n, m);
  print_matriz(matriz, n, m);
  maiores_num(n, m, matriz, &maior1);

  printf("\n Maiores: %i \n", maior1);

  for(int i = 0; i<n; i++){
      free(matriz[i]);

  }
    free(matriz);
    
}
