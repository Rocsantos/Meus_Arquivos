//Analisar a diferença entre o código do professor no moodle e este
#include <stdio.h>
#include "fila_int.h"
#define N 10
int fila[N] = {};
static int p, u;

//Maicon Lucas Mares de Souza - 18/0023411
//Rodrigo Carvalho dos Santos - 18/0027352

void cria_fila(){
  p = 0;
  u = 0;
}

int insere_fila(int elemento){
  if (!fila_cheia()){
    fila[u++] = elemento; //u++ dentro do vetor incrementa u e depois retorna o valor de u
    return 1;
  }
  return 0;
}

int remove_fila(int *y){
  int ret = 1;
  *y = fila[p++];
  if (!fila_vazia()) return 1;
  return 0;
}

int fila_vazia(){
  if (p == u) {
    cria_fila();
  } return p == u;
}

int fila_cheia(){
  return u==N;
}

int qtd_elementos(){
  return u-p;
}

//Imprimir somente elementos entre 1 e 999 e fazer uma impressão organizada. Ou seja, teremos no máximo 3 dígitos
//Mostrar para onde p e u estão apontando colocando cada um debaixo do elemento que ele aponta
void imprimir_fila(){
  int tamanho_fila;
  tamanho_fila = qtd_elementos();
  if (!fila_vazia()){
    printf("Elementos na fila:\n");
    printf("--------------------------------------------------------------\n");
    for (int i = 0; i < N; i++) {
      printf("| %3d ", fila[i]);
    }
    printf("|\n");
    printf("--------------------------------------------------------------\n");
    for (int k = 0; k <= p; ++k){
      if (p == k)
      {
        printf("   p");
        for (int j = p; j <= u; ++j)
        {
          if (u == j)
          {
            printf("u\n");
            break;
          } else {
            printf("      "); //Espaços entre p e u
          }
        }

      } else {
        printf("      "); //Espaços antes de p
      }
    } 
  } else {
    printf("A fila está vazia\n");
  }
}