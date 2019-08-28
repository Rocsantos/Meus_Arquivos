#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct elem
{
    char dado;
    struct elem *anterior;
} celula;

celula *pilha = NULL;

void limpapilha();
int empilha(char x);
int desempilha(char *y);
int estaparentisada(char *f);

int main()
{
    int parentizada;
    char funcao[1<<20];
    scanf("%s", funcao);
    parentizada = estaparentisada(funcao);
    if (parentizada == 1)
    {
        puts("sim");
    }
    else if (parentizada == -1)
    {
        puts("Falha na verificação");
    }
    else
    {
        puts("nao");
    }
    if(pilha != NULL)
    {
        limpapilha();
    }
    else
    {
        free(pilha);
    }
    return 0;
}

int empilha(char x)
{
    celula *nova = malloc(sizeof(celula));
    if (nova == NULL)
    {
        return 0;
    }
    nova->dado = x;
    nova->anterior = pilha;
    pilha = nova;
    return 1;
}

int desempilha(char *y)
{
    celula *lixo = pilha;
    if (pilha == NULL)
    {
        return 0;
    }
    pilha = lixo->anterior;
    *y = lixo->dado;
    free(lixo);
    return 1;
}

void limpapilha()
{
    char donny;
    while (pilha->anterior != NULL)
    {
        desempilha(&donny);
    }
    free(pilha);
}

int estaparentisada(char f[])
{
    int tam = strlen(f), aux, bem_alocado;
    for (int i = 0; i < tam; i++)
    {
        if (f[i] == '(' || f[i] == '[' || f[i] == '{')
        {
            bem_alocado = empilha(f[i]);
            if (!bem_alocado)
            {
                return -1;
            }
        }
        else
        {
            char y;
            if (f[i] == ')')
            {
                bem_alocado = desempilha(&y);
                if (y != '(' || !bem_alocado)
                {
                    return 0;
                }
            }
            if (f[i] == ']')
            {
                bem_alocado = desempilha(&y);
                if (y != '[' || !bem_alocado)
                {
                    return 0;
                }
            }
            if (f[i] == '}')
            {
                bem_alocado = desempilha(&y);
                if (y != '{' || !bem_alocado)
                {
                    return 0;
                }
            }
        }
    }
    if (pilha == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}