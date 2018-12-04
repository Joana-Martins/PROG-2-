#include <stdio.h>

void main(){

  float peso, altura;
  printf("Informe sua altura e seu peso: ");
  scanf(" %f %f", &altura, &peso);

  if(altura >= 1.75 && altura <= 1.90){
    if(peso >= 70 && peso <= 80){
      printf("ACEITO\n");
    }else{
      printf("RECUSADO POR PESO\n");
    }
  }else{
    if(peso >= 70 && peso <= 80){
      printf("RECUSADO POR ALTURA\n");
    }else{
      printf("TOTALMENTE RECUSADO\n");
    }
  }
}
