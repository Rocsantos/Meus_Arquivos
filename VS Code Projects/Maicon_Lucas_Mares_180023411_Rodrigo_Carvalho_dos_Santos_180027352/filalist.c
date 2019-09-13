#include "filalist.h"
#include<stdio.h>
#include <stdlib.h>

//Maicon Lucas Mares de Souza - 180023411
//Rodrigo Carvalho dos Santos - 18/0027352

typedef struct elem
{
    int dado;
    struct elem *prox;
}
celula;

celula *cabeca, *fila;

void *mallocc(size_t z)
{
    void *ptr = malloc(z);
    if(ptr == NULL)
    {
        printf("Memória insuficiente. Ocorreu um problema de alocação!");
        exit(EXIT_FAILURE);
    }
    return ptr;
}

void cria_fila()/*********1*/
{
    free(cabeca); free(fila);
    cabeca = mallocc(sizeof(celula));
    fila = mallocc(sizeof(celula));
    cabeca->prox = fila;
    fila->prox = cabeca;
}/*************************/

int insere_fila(int x)/***2*/
{
    celula *novo;
    novo = malloc(sizeof(celula));
    if (novo == NULL)
    {
        return -1;
    }
    novo->prox = fila;
    cabeca->dado = x;
    cabeca->prox = novo;
    cabeca = novo;
    //Não precisa dar um free em novo? Já que cabeça recebe de novo ficariam duas celular duplicadas.
    return 1;
}/*************************/

int remove_fila(int *y)/**3*/
{
    celula *lixo = fila->prox;
    if(!fila_vazia())
    {
        *y = lixo->dado;
        fila->prox = lixo->prox;
        free(lixo);
        return 1;
    }
    return 0;
}/**************************/

int fila_cheia()/*********4*/
{
    //Cadê a implementação? Ela nunca fica cheia?
    return 0;
}

int fila_vazia()/*********5*/
{
    return fila->prox == cabeca;
}/**************************/

int qtd_elementos()/*******6*/
{
    celula *p;
    int i = 0;
    for (p = fila; p != cabeca; p = p->prox)
    {
        if (p->prox == cabeca)
        {
            return i;
        }
        i++;
    }
    return 0;
}/*************************/

void imprimir_fila()/******7*/
{
    celula *p;
    int N = qtd_elementos();
    printf("Elementos na fila:\n");
    printf(" -----");
    for(int i = 0; i < N - 1; i++)
    {
        printf("------");
    }
    printf("\n| ");
    for (p = fila->prox; p != cabeca; p = p->prox)
    {
        printf("%3.0d | ", p->dado);
    }printf("\n -----");
    for(int i = 0; i < N - 1; i++)
    {
        printf("------");
    }
    printf("\n   p  ");
    for (int i = 0; i < N - 1; i++)
    {
        printf("      ");
    }
        puts("   u");
}/*************************/
