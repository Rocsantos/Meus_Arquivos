#include "filavet.h"
#include <stdio.h>

//Maicon Lucas Mares de Souza - 18/0023411
//Rodrigo Carvalho dos Santos - 18/0027352

/*
    Verifique o arquivo .h, para informações sobre retorno da funções
*/

#define N 10 /* Define o valor 10 para N */

int fila[N];
int p,
    u;

void criafila()/*********1*/
{
    p = 0;
    u = 0;
}/*************************/

int inserefila(int x)/***2*/
{
    if(!estacheia())
    {
        fila[u++] = x;
        return 1;
    }
    return 0;
}/*************************/

int removefila(int *y)/**3*/
{
    if(!estavazia())
    {
        *y = fila[p++];
        return 1;
    }
    return 0;
}/*************************/

int estacheia()/*********4*/
{
    return u == N;
}/*************************/

int estavazia()/*********5*/
{
    return p == u;
}/*************************/

int tamanhofila()/*******6*/
{
    return u - p;
}/*************************/

void imprimefila()/******7*/
{
    int aux = 0;
    printf(" -----");
    for(int i = 0; i < N - 1; i++)
    {
        printf("------");
    }
    printf("\n| ");
    for(int i = 0; i < N; i++)
    {
        printf("%03d | ", fila[i]);
    }
    printf("\n -----");
    for(int i = 0; i < N - 1; i++)
    {
        printf("------");
    }
    printf("\n  ");
    for(int i = 0; i <= N; i++)
    {
        if(i == u)
        {
            if(estavazia())
            {
                printf("p u  ");
            }
            else
            {
                printf("  u  ");
            }
        }
        else
        {
            if(i == p)
            {
                printf(" p   ");
            }
            else
            {
                printf("      ");
            }
        }
    }
    puts("");
}/*************************/

void identifica()/*******8*/
{
    puts("Biblioteca de Fila com Vetor Fixo");
}/*************************/

void liberafila()/*******9*/
{
}/*************************/