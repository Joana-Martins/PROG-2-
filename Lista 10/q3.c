#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct Livro{
  char titulo[30];
  char autor[15];
  int ano;
}Livro;

Livro criaLivro(){
  Livro l;

  printf("Nome do livro: ");
  scanf("%s", &l.titulo);
  printf("Autor: ");
  scanf("%s", &l.autor);
  printf("Ano de publicação: ");
  scanf("%i", &l.ano);

  return l;
}

void main(){

  Livro l[5];
  int i;
  char procura[20];

  for(i = 0; i < 5; i++){
    l[i] = criaLivro();
  }

  printf("Qual o livro que busca?");
  scanf("%s", &procura);

  for(i = 0; i < 5; i++){
    if(strcmp(l[i].titulo, procura) == 0){
      printf("INFORMAÇÕES DO LIVRO\n\n");
      printf("Nome do livro: %s\n", l[i].titulo);
      printf("Autor: %s\n", l[i].autor);
      printf("Ano de publicação: %i\n", l[i].ano);
    }
  }

}
