#include "filalist.h"
#include<stdio.h>
#include <stdlib.h>

//Maicon Lucas Mares de Souza - 18/0023411
//Rodrigo Carvalho dos Santos - 18/0027352

/*
    Verifique o arquivo .h, para informações sobre retorno da funções
*/

typedef struct elem
{
    int dado;
    struct elem *prox;
}
celula;

celula *fila;

void *mallocc(size_t z)
{
    void *ptr = malloc(z);
    if(ptr == NULL)
    {
        printf("Erro na alocação");
        getchar();
        exit(EXIT_FAILURE);
    }
    return ptr;
}

void criafila()/*********1*/
{
    fila = mallocc(sizeof(celula));
    fila->dado = 0;
    fila->prox = fila;
}/*************************/

int inserefila(int x)/***2*/
{
    celula *novo = malloc(sizeof(celula));
    if (novo == NULL)
    {
        return -1;
    }
    novo->dado = fila->dado + 1;
    novo->prox = fila->prox;
    fila->prox = novo;
    fila->dado = x;
    fila = novo;
    return 1;
}/*************************/

int removefila(int *y)/**3*/
{
    celula *lixo = fila->prox;
    if(!estavazia())
    {
        *y = lixo->dado;
        fila->prox = lixo->prox;
        free(lixo);
        fila->dado--;
        return 1;
    }
    return 0;
}/**************************/

int estacheia()/*********4*/
{
    return 0;
}

int estavazia()/*********5*/
{
    return fila->prox == fila;
}/**************************/

int tamanhofila()/*******6*/
{
    return fila->dado;
}/*************************/

void imprimefila()/******7*/
{
    if(estavazia())
    {
        puts("A fila esta vazia");
    }
    else
    {
        celula *p;
        int N = tamanhofila();
        printf(" -----");
        for(int i = 0; i < N - 1; i++)
        {
            printf("------");
        }
        printf("\n| ");
        for (p = fila->prox; p != fila; p = p->prox)
        {
            printf("%03d | ", p->dado);
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
    }
}/*************************/

void identifica()/********8*/
{
    puts("Biblioteca de Fila com Lista Encadeada Circular");
}/*************************/

void liberafila()
{
    int inutil;
    while (!estavazia())
    {
        removefila(&inutil);
    }
    free(fila);
}