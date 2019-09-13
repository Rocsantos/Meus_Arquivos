#include "fila_circular_com_redimensionamento.h"
#include <stdio.h>
#include <stdlib.h>

//Maicon Lucas Mares de Souza - 180023411
//Rodrigo Carvalho dos Santos - 18/0027352

static int N = 5;
static int p, u, *fila;

void cria_fila(){
	N = 5;
	fila = malloc(N*sizeof(int));
	p = 0;
	u = 0;
}

int insere_fila(int elemento){
	int ret = 1;
	if (fila_cheia()) ret = redimensiona(); //Verifica se a fila está cheia
	if (ret){ 
		fila[u++] = elemento;
		if (u == N) u = 0;
	}
	return ret;
}

int fila_cheia(){
	if((u+1)%N == p){
		return 2;
	}
	return 0;
}

int fila_vazia(){
	return p == u;
}

int remove_fila(int *y){
	int indice = 0;
	if (!fila_vazia())
	{
		*y = fila[p++]; //porque armazenar em um ponteiro?
		indice = p-1;
		fila[indice] = 0;
		if (p == N) p = 0;
		return 1;
	}
	return 0;
}

int qtd_elementos(){
	int total = u-p;
	if (p > u) total = N + total;
	return total;	
}

void libera(){
	free(fila);
}

int redimensiona(){
	int i, j;
	fila = realloc(fila, 2*N*sizeof(int));
	if(fila == NULL) {
		printf("Ocorreu um problema de alocação!\n");
		return 0;
	} //O que significa isto?
	if(u != N-1){
		if(u-1 < N-p){
			for (i = N, j = 0; j < u; i ++, j ++)
			{
				fila[i] = fila[j];
				fila[j] = 0;
			}
			u = N + u; //Novo valor de quem foi mudado de lugar
		} else {
			for (i = N + p, j = p; j < N; i++, j++) //Porque o valor de quem recebe é N + p? Porque repete N-1 vezes?
			{	
				fila[i] = fila[j];
				fila[j] = 0;

			}
			p = N + p;
		}
	}

	N *= 2;
	return 1;
}

void imprimir_fila(){
	int tamanho_fila;
  	tamanho_fila = qtd_elementos();
  	if (!fila_vazia()){
  		if (p < u){
		    printf("Elementos na fila:\n");
		    printf(" -----");
		    for(int i = 0; i < N - 1; i++){
        		printf("------");
    		}
    		printf("\n");
		    for (int i = 0; i < N; i++) {
		      printf("| %3d ", fila[i]);
		    }
		    printf("|\n");
		    printf(" -----");
		    for(int i = 0; i < N - 1; i++){
        		printf("------");
    		}
    		printf("\n");
		    for (int k = 0; k <= p; ++k){
		      if (p == k)
		      {
		        printf("   p");
		        for (int j = p+1; j <= u+1; ++j)
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
		} else if (p > u){
			printf("Elementos na fila:\n");
			printf(" -----");
		    for(int i = 0; i < N - 1; i++){
        		printf("------");
    		}
    		printf("\n");
		    for (int i = 0; i < N; i++) {
		      printf("| %3d ", fila[i]);
		    }
		    printf("|\n");
		    printf(" -----");
		    for(int i = 0; i < N - 1; i++){
        		printf("------");
    		}
    		printf("\n");
		    for (int k = 0; k <= u+1; ++k){
		      if (u == k){
		        printf("   u");
		        for (int j = u; j <= p; ++j)
		        {
		          if (p == j)
		          {
		            printf("   p\n");
		            break;
		          } else {
		            printf("      "); //Espaços entre u e p
		          }
		        }

		      } else {
		        printf("      "); //Espaços antes de u
		      }
		    }	
		}
	  } else {
	    printf("A fila está vazia\n");
	  }
}