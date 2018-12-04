#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int pertVet(int elem, int *v, int sz){
  for(int i = 0; i < sz; i++){
    if(elem == v[i]){
      return 1;
    }else{
      return 0;
    }
  }
}
void uniaoVet(int *v1, int *v2, int *v3, int t1, int t2){

  int c = 0;

  for(int i = 0; i < t1; i++){
      v3[c] = v1[i];
      c++;
  }

    for (int i = 0; i < t2; i++){
        v3[c] = v2[i];
        c++;
    }
}

void BubbleSort(int *v, int sz){
  for(int j = sz -1; j > 0; j--){
    for(int i = 0; i < j; i++){
      if(v[i] > v[i + 1]){
        int aux = v[i];
        v[i] = v[i+1];
        v[i+1] = aux;
      }
    }
  }
}


int* uniao(int *x1, int *x2, int n1, int n2, int* qtd){
  int *v3;
  int n3 = n1 + n2;
  v3 = malloc(n3 * sizeof(int));

    uniaoVet(x1, x2, v3, n1, n2);

    BubbleSort(v3, n3);

    *qtd = n3;
    return v3;
}

int* repeticao(int *v3, int n3, int *qtd){
  int n = 0, i, j, *aux;

  for(i = 0; i < n3; i++){
    for(j = 0; j < n; j++){
      if( v3[i] == aux[j]){
        break;
      }
    }
    if (j == n){
      aux[n] = v3[i];
      n++;
    }
  }

  *qtd = n;
  return aux;
}

void main(){
  int x1[5] = {1, 3, 5, 6, 7};
  int n1 = 5;

  int x2[5] = {1, 3, 4, 6, 8};
  int n2 = 5;

  int *x3, *out;
  int n3, n;

  x3 = uniao(x1, x2, n1, n2, &n3);

  out = repeticao(x3, n3, &n);

  for(int i = 0; i < n; i++){
    printf("%i ", out[i]);
  }
  printf("\n");

  free(x3);

}
