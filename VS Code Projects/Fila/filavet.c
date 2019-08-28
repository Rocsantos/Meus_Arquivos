#include "filavet.h"
#define N 10

int fila[N];
int p,
    u;

void criafila()/*********1*/
{
    p = 0;
    u = 0;
}

int inserefila(int x)/***2*/
{
    if(!estacheia())
    {
        fila[u++] = x;
        return 1;
    }
    return 0;
}

int removefila(int *y)/**3*/
{
    if(!estavazia())
    {
        *y = fila[p++];
        return 1;
    }
    return 0;
}

int estacheia()/*********4*/
{
    return u == N;
}

int estavazia()/*********5*/
{
    return p == u;
}

int tamanhofila()/*******6*/
{
    return u - p;
}

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
        printf("%03.d | ", fila[i]);
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
            printf("  u  ");
        }
        else
        {
            if(i == p)
            {
                printf(" p   ");
                if(estavazia() && !aux)
                {
                    printf("p u  ");
                    aux = 1;
                }
            }
            else
            {
                printf("      ");
            }
        }
    }
    puts("");
}
