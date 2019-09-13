#include "filacirc.h"
#include <stdio.h>
#include <stdlib.h>

//Maicon Lucas Mares de Souza - 18/0023411
//Rodrigo Carvalho dos Santos - 18/0027352

/*
    Verifique o arquivo .h, para informações sobre retorno da funções
*/

static int I = 5;
static int p, u, *fila;

void *mallocc(size_t z)
{
    void *ptr = malloc(z);
    if(ptr == NULL)
    {
        printf("Memória insuficiente.");
        exit(EXIT_FAILURE);
    }
    return ptr;
}

void criafila(){
    free(fila);
	I = 5;
	fila = mallocc(N*sizeof(int));
	p = 0;
	u = 0;
}

int inserefila(int elemento){
	int ret = 1;
	if (estacheia()) ret = redimensiona(); //Verifica se a fila está cheia
	if (ret){ 
		fila[u++] = elemento;
		if (u == I) u = 0;
	}
	return ret;
}

int estacheia(){
	if((u+1)%I == p){
		return 1;
	}
	return 0;
}

int estavazia(){
	return p == u;
}

int removefila(int *y){
	int indice = 0;
	if (!estavazia())
	{
		*y = fila[p++]; //porque armazenar em um ponteiro?
		indice = p-1;
		fila[indice] = 0;
		if (p == I) p = 0;
		return 1;
	}
	return 0;
}

int tamanhofila(){
	int total = u-p;
	if (p > u) total = I + total;
	return total;	
}

int redimensiona(){
	int i, j;
	fila = realloc(fila, 2 * I * sizeof(int));
	if(fila == NULL) {
		return -1;
	}
	if(u != I-1){
		if(u-1 < I-p){
			for (i = I, j = 0; j < u; i ++, j ++)
			{
				fila[i] = fila[j];
				fila[j] = 0;
			}
			u = I + u;
		} else {
			for (i = I + p, j = p; j < I; i++, j++)
			{	
				fila[i] = fila[j];
				fila[j] = 0;

			}
			p = I + p;
		}
	}

	I *= 2;
	return 1;
}

void imprimefila(){
	int tamanho_fila;
  	tamanho_fila = tamanhofila();
  	if (!estavazia()){
  		if (p < u){
		    printf("Elementos na fila:\n");
		    printf(" -----");
		    for(int i = 0; i < I - 1; i++){
        		printf("------");
    		}
    		printf("\n");
		    for (int i = 0; i < I; i++) {
		      printf("| %03d ", fila[i]);
		    }
		    printf("|\n");
		    printf(" -----");
		    for(int i = 0; i < I - 1; i++){
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
		    for(int i = 0; i < I - 1; i++){
        		printf("------");
    		}
    		printf("\n");
		    for (int i = 0; i < I; i++) {
		      printf("| %3d ", fila[i]);
		    }
		    printf("|\n");
		    printf(" -----");
		    for(int i = 0; i < I - 1; i++){
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

void identifica()
{
    puts("Biblioteca de Fila Circular com Redimensionamento");
}

void liberafila()
{
    free(fila);
}