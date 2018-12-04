#include <stdio.h>


int main(){
  float litros, preco;
  int tipo;

  printf("Informe o tipo 1-ácool; 2- gasolina e a quantidade: \n");
  scanf(" %i %f", &tipo, &litros);

  if(tipo == 1){
    preco = 2.83*litros;
  }else{
    preco = 3.15*litros;
  }

  printf("Preço a pagar: %2.f\n", preco);

  return 0;
}
