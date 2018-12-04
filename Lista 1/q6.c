#include <stdio.h>

void main(){

  int a, n, soma = 0;
  printf("Informe A e N: ");
  scanf(" %i %i", &a, &n);


  if( n <= 0){
    printf("Valor inválido, tente novamente");
    scanf(" %i", &n);
  }
  for(int i = 0; i < n; i++){
    soma += a;
    a++;
  }
  printf("SOMA = %i\n", soma);
}
