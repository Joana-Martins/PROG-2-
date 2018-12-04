#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void calc_esfera(float R, float *area, float *volume){
  *area = 4 * pow(R, 2) * M_PI;
  *volume = (4/3) * M_PI * pow(R, 3);
}


int main(){
  float area, volume, r;

  printf("Qual o raio da esfera? \n");
  scanf(" %f", &r);

  calc_esfera(r, &area, &volume);
  printf(" area: %f \n volume: %f\n", area, volume);
}
