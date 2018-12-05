#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct Vetor{
float x;
float y;
float z;
}Vetor;

Vetor soma_r3(Vetor vetor1, Vetor vetor2){

    Vetor resultado;
    resultado.x = vetor1.x +vetor2.x;
    resultado.y = vetor1.y +vetor2.y;
    resultado.z = vetor1.z +vetor2.z;

    return resultado;
}

void main(){
  Vetor v1, v2, v3;
  int i;

  v1.x = 80;
  v1.y = 5;
  v1.z = 7;

  v2.x = 92;
  v2.y = 94;
  v2.z = 95;

  v3 = soma_r3(v1, v2);

  printf("Vetor soma:\n");
    printf("%.2f", v3.x);
    printf(" %.2f", v3.z);
    printf(" %.2f\n", v3.z);
}
