#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N (1 << 6)

typedef struct elem
{
    char dado;
    struct elem *anterior;
} celula;

celula *pilha_de_parenteses = NULL;
celula *pilha_de_operadores = NULL;


char posfixa[N], sinal_de_associacao[] = { '}', ']', ')', '{', '[', '(' };

void limpapilha(celula *pilha);
int empilha(char x, celula *pilha);
int desempilha(char *y, celula *pilha);
int posfixafuncao(char *f);
int prioridade(char c);

int main()
{
    int eposfixa;
    char funcao[N];
    scanf("%s", funcao);
    puts("Função será analisada");
    eposfixa = posfixafuncao(funcao);
    if (eposfixa == 1)
    {
        printf("\n%s\n", posfixa);
    }
    else if (eposfixa == -1)
    {
        puts("Erro em alocação");
    }
    else
    {
        puts("incorretamente parentizada");
    }

    if(pilha_de_operadores != NULL)
    {
        limpapilha(pilha_de_operadores);
    }
    else
    {
        free(pilha_de_operadores);
    }
    if (pilha_de_parenteses != NULL)
    {
        limpapilha(pilha_de_parenteses);
    }
    else
    {
        free(pilha_de_parenteses);
    }
    return 0;
}

int empilha(char x, celula *pilha)
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

int desempilha(char *y, celula *pilha)
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

void limpapilha(celula *pilha)
{
    char donny;
    while (pilha->anterior != NULL)
    {
        desempilha(&donny, pilha);
    }
    free(pilha);
}

int prioridade(char c)
{
    switch (c)
    {
        case '^':
            return 5;
        case '*':
            return 4;
        case '/':
            return 3;
        case '+':
            return 2;
        case '-':
            return 1;
        default:
            break;
    }
    return 0;
}

int posfixafuncao(char *f)
{
    puts("Começando a função");
    int j = 0;
    for(int i = 0; i < strlen(f); i++)
    {
        char c = f[i], op, t;
        if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
            posfixa[j] = c; 
            j++;
        }
        else
        {
            if(c == '(' || c == '[' || c == '{')
            {
                getchar();
                if(!empilha(c, pilha_de_parenteses))
                {
                    return -1;
                }
                printf("0-empilhou %c ", pilha_de_parenteses->dado);
            }
            else
            {
                for (int k = 0; k < 3; k++)
                {
                    if(c == sinal_de_associacao[k])
                    {
                        if(!desempilha(&op, pilha_de_parenteses))
                        {
                            return 0;
                        }printf("desempilhou %c ", op);
                        while(op != sinal_de_associacao[k + 3])
                        {
                            posfixa[j] = op;
                            j++;
                            if(!desempilha(&op, pilha_de_parenteses))
                            {
                                return 0;
                            }printf("2-desempilhou %c ", op);
                        }
                    }
                }/* *
                if(c != '(' && c != '[' && c != '{' && c != ')' && c != ']' && c != '}')
                {
                    desempilha(&t, pilha_de_operadores);printf("3-desempilhou %c ", t);
                    if(prioridade(c) > prioridade(t))
                    {
                        if(!empilha(t, pilha_de_operadores))
                        {
                            return -1;
                        }printf("4-empilhou %c ", pilha_de_operadores->dado);
                        if(!empilha(c, pilha_de_operadores))
                        {
                            return -1;
                        }printf("5-empilhou %c ", pilha_de_operadores->dado);
                    }
                    else
                    {
                        while(prioridade(c) <= prioridade(t))
                        {
                            posfixa[j] = t;
                            j++;
                            desempilha(&t, pilha_de_operadores);printf("6-desempilhou %c ", t);
                        }
                        if(!empilha(t, pilha_de_operadores))
                        {
                            return -1;
                        }printf("7-empilhou %c ", pilha_de_operadores->dado);
                        if(!empilha(c, pilha_de_operadores))
                        {
                            return -1;
                        }printf("8-empilhou %c ", pilha_de_operadores->dado);
                    }
                }/* */
            }
        }
        printf("\n%s\n", posfixa);
    }
    while(pilha_de_operadores != NULL)
    {
        desempilha(&posfixa[j], pilha_de_operadores);
        printf("9-desempilhou %c ", posfixa[j]);
        j++;
    }
    return 1;
}