#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int procuraNome (char **lista, int sz, char *nome){
  int linha = -1;
  char *str;

  for(int i = 0; i < sz; i++){
    str = lista[i];
    if(strcmp(nome, str) == 0){
      linha = i;
    }
  }
  free(str);

  return linha;
}

void main(){

  int qnt;
  char **nomes, opcao;

  printf("Quantos nome?\n");
  scanf("%i", &qnt);

  nomes = (char **) malloc(qnt * sizeof(char *));
  for(int i = 0; i<qnt; i++){
       nomes[i] = (char *) malloc(30 * sizeof(char));
   }

   do{

     printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
     printf("-=-=-=-=-=-=-=-=ESCOLHA UMA OPÇÃO-=-=-=-=-=-=-=-=-=\n");
     printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

     printf("(a) Gravar um nome em uma linha\n");
     printf("(b) Apagar um nome contido em uma linha\n");
     printf("(c) Substituir um nome\n");
     printf("(d) Apagar um nome\n");
     printf("(e) Recuperar um nome contido em uma linha\n");
     printf("(f) Sair\n");

     printf(">> ");
     scanf(" %c", &opcao);
     if((opcao >= 'a') && (opcao <= 'f')){
       break;
     }else{
       printf("Digite outra opção");
       printf(">> ");
       scanf(" %c", &opcao);
     }
     int linha;
     char nome[30];
     switch(opcao){
       case 'a':
       printf("Informe a linha: ");
       scanf(" %i", &linha);
       linha --;

       printf("Nome: ");
       scanf(" %s", &nome[linha]);

       printf("Nome gravado com sucesso!");
       break;
     }

   }while(opcao != 'f');
}
