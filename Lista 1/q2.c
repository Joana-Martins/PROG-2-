#include <stdio.h>

void main(){

  char doenca;
  int idade;
  float valor;
  printf("Informe a idade: ");
  scanf(" %i", &idade);

  printf("Doença crônica: ");
  scanf(" %c", &doenca);

  if(idade >= 0 && idade <=18){
    valor = 83.15;
  }else if(idade > 18 && idade < 33){
    valor = 133.88;
    if(doenca == 's'){
      valor = valor * 1.05;
    }
  }

  printf("VALOR: %f\n", valor);
  //ASSIM POR DIANTE;
}
