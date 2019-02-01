#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


char *leitor_path (FILE *f,char *path){
  char vetor_auxiliar[300];
  fscanf(f, "%s", vetor_auxiliar); //armazena o path em um vetor;
  path = malloc(300 * sizeof(char));
  strcpy(path, vetor_auxiliar);
  return path;
}

void main(){

  FILE *arquivo_config;
  char *path_treino; *path_teste; *path_predicoes; *path;
  arquivo_config = fopen("config.txt", "r");
  path_teste =
}
