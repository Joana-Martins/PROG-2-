#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void aloca_string(char *frase, int tamanho){

  frase = (char*) malloc (tamanho * sizeof(char));

}

void vogais(char *f, char *socorro, int n){
  int i, j;

  for(i = 0; i < n; i++){
    for(j = 0; j < n; i++){
      if(((((f[i] != 'a')||f[i] != 'e')||f[i] != 'i')||f[i] != 'o')||f[i] != 'u'){
        strcp(f[i], socorro[j]);
      }
    }
  }
}

void main(){

    int i, n;
  printf("Digite o tamanho da string: ");
  scanf("%i", &n);

  char *aux, *help;

  aloca_string(aux, n);
  aloca_string(help, n);

  vogais(aux, help, n);

  for( i = 0; i < n; i++){
    printf("%c", help[i]);
  }
  printf("\n");



}
