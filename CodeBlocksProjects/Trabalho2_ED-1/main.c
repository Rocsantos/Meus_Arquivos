#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct elem
{
    char argumento;
    struct elem *anterior;
}celula;

celula *pilha;
pilha = malloc(sizeof(celula));

if(pilha == NULL)
{
    puts("Erro na alocacao de memoria");
    exit(EXIT_FAILURE);
}

pilha->anterior = NULL;

int empilha(char x);
int desempilha(char *y);
int esta_parentisada(char *exp);

int main()
{
    char expressao[50];
    int resposta = esta_parentisada(expressao);
    if(resposta == 1)
        puts("sim");
    else if(resposta == -1)
        puts("Houve um erro na alocacao da memoria");
    else
        puts("nao");
}

int(esta_parentisada(char *exp))
{
    char p;
    for(int i = 0; i < strlen(exp); i++)
    {
        if(exp[i] == ')')
        {
            do
            {
                if(!desempilha(&p))
                    return 0;
            }while(p != '(');
        }
        if(exp[i] == ']')
        {
            do
            {
                if(!desempilha(&p))
                    return 0;
            }while(p != '[');
        }
        if(exp[i] == '}')
        {
            do
            {
                if(!desempilha(&p))
                    return 0;
            }while(p != '{');
        }
        empilha(exp[i]);
    }
    do
    {
        if( !desempilha(&p) )
            return 0;
    }while(p != '(' || p != '[' || p != '{');
}

int empilha(char x)
{
    celula *novo = malloc(sizeof(celula));
    if(novo == NULL)
        return -1;
    pilha->argumento = x;
    novo->anterior = pilha;
    pilha = novo;
    return 1;
}

int desempilha(char *y)
{
    if(pilha->anterior == NULL)
        return 0;
    celula *lixo = pilha->anterior;
    *y = lixo->argumento;
    pilha->anterior = lixo->anterior;
    free(lixo);
    return 1;
}
