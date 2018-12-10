#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void lerVotos(int *votos){
  FILE *v;
  int i = 0;
  v = fopen("votos.txt", "r");
    if(v == NULL){
      printf("ERRO! Arquivo não existe!");
      exit(1);
    }

  while(fscanf(v, "%i\n", &votos[i]) != EOF){
    i++;
  }
  fclose(v);
}


void main(){

  int *votos, votos1 = 0, votos2 = 0, votos3 = 0, votos4 = 0, votos5 = 0, votosNulo = 0;
  int maior, menor, todos[6], cand1, cand2;

  votos = (int*) malloc (100 * sizeof(int));
  lerVotos(votos);

  for(int i = 0; i < 100; i++){

    switch (votos[i]) {
      case 1 :
      votos1++;
      break;

      case 2 :
      votos2++;
      break;

      case 3 :
      votos3++;
      break;

      case 4 :
      votos4++;
      break;

      case 5 :
      votos5++;
      break;

      default :
      votosNulo++;
    }
  }

  todos[0] = votos1;
  todos[1] = votos2;
  todos[2] = votos3;
  todos[3] = votos4;
  todos[4] = votos5;
  todos[5] = votosNulo;
  int aux = 0, aux2 = 100;

  for(int i = 0 ; i < 5; i++){
    if(todos[i] >  aux){
      aux = todos[i];
      cand1 = i+1;
    }

    if(todos[i] < aux2){
      aux2 = todos[i];
      cand2 = i+1;
    }
  }

  printf("\n =.=.=.=.=.= RESULTADO =.=.=.=.=\n");
  printf("Mais votado:\n");
  printf("ID: %i \n VOTOS: %i \n\n", cand1, aux);
  printf("Menos votado:\n");
  printf("ID: %i \n VOTOS: %i \n", cand2, aux2);

  free(votos);
}
