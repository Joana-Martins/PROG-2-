#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct Aluno{

  char matricula[11];
  char nome[10];
  float p1;
  float p2;
  float p3;
}Aluno;

Aluno criaAluno(){

  Aluno a;

  printf("Numero de matricula: ");
  scanf("%s", &a.matricula);
  printf("Nome: ");
  scanf("%s", &a.nome);
  printf("Nota da p1: ");
  scanf("%f", &a.p1);
  printf("Nota da p2: ");
  scanf("%f", &a.p2);
  printf("Nota da p1: ");
  scanf("%f", &a.p3);

  return a;
}

float media(float x, float y, float z){
    return (x + y + z)/3;
}

void main(){

  Aluno alunos[5];
  float maiormedia, menormedia, medias[5], aux = 0, aux2 = 11;
  int i;

  for(i = 0; i < 5; i++){
    alunos[i] = criaAluno();
  }

  for(i = 0; i < 5; i++){
    medias[i] = media(alunos[i].p1, alunos[i].p2, alunos[i].p3);
    printf("%f\n", medias[i]);
    if (medias[i] >= 7){
      printf(" Aluno(a) %s está APROVADO(A).\n", alunos[i].nome);
    }else{
      printf(" Aluno(a) %s está REPROVADO(A).\n", alunos[i].nome);
    }
  }
}
