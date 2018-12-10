#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


typedef struct Carro{
    char marca[15];
    int ano;
    float preco;
}Carro;


 Carro criacarro(){
  Carro c;
  printf("Digite a marca: ");
  scanf(" %s", &c.marca);
  printf("Digite o ano: ");
  scanf("%i", &c.ano);
  printf("Digite o preco: ");
  scanf("%f", &c.preco);

  return c;
}

void imprime_carro(Carro c){
  printf("A marca: %s\n", c.marca);
  printf("Ano: %i\n", c.ano);
  printf("Preco: %f", c.preco);
}

void main(){

  float p = 1;
  int i, n;
  Carro *carro;

  printf("Quantos carros deseja armazenar? ");
  scanf("%i", &n);

  carro = malloc (n * sizeof(Carro));

  for(i = 0; i < n; i++){
    carro[i] = criacarro();
  }

  do{
    printf("\nDigite um preco P: ");
    scanf(" %f", &p);

    for(i = 0; i < n; i++){
      if (carro[i].preco < p){
        imprime_carro(carro[i]);
      }
    }

  }while(p != 0);

  free(carro);
}
