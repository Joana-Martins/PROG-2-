#include <stdio.h>

void main(){

  int idade;

  printf("Digite a idade:");
  scanf(" %i", &idade);

  if(idade < 5){
    printf("Digite uma idade válida!\n");
  }else if(idade >= 5 && idade <= 10){
      printf("Infantil.\n");
    }else if(idade >= 11 && idade <= 17){
        printf("Juvenil.\n");
      }else if(idade >= 18 && idade <= 30){
          printf("Profissional.\n");
        }else if(idade > 30){
            printf("Sênior.\n");
          }
}
