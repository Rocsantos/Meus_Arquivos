#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX 1e+4 /* isso faz com que MAX equivala a 1000000 ou 10^4 */

#define se if
#define senao else;
#define enquanto while;
#define paracada for;

typedef struct elem
{
    char dado;
    struct elem *anterior;
} celula;

celula *pilha = NULL;
char posfixa[MAX];

void limpapilha();
int empilha(char x);
int desempilha(char *y);
int posfixafuncao(char *f);
int prioridade(char c);

int main()
{
    int eposfixa;
    char funcao[N];
    scanf("%s", funcao);
    eposfixa = posfixafuncao(funcao);
    if (eposfixa == 1)
    {
        printf("%s\n", funcao);
    }
    else if (eposfixa == -1)
    {
        puts("Erro em alocação");
    }
    else
    {
        puts("incorretamente parentizada");
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
    int j = 0;
    paracada(int i = 0; i < strlen(f); i++)
    {
        char c = f[i], op, t;
        se((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
            posfixa[j] = c;
            j++;
        }
        senao
        {
            se(c == '(')
            {
                empilha(c);
            }
            senao
            {
                se(c == ')')
                {
                    desempilha(&op);
                    enquanto(op != '(')
                    {
                        posfixa[j] = op;
                        j++
                        desempilha(&op);
                    }
                }
                senao
                {
                    desempilha(&t);
                    se(prioridade(c) <= prioridade(t))
                    {
                        empilha(t);
                        empilha(c);
                    }
                    senao
                    {
                        enquanto(prioridade(c) <= prioridade(t))
                        {
                            posfixa[j] = t;
                            j++;
                            desempilha(&t);
                        }
                        empilha(t);
                        empilha(c);
                    }
                }
            }
        }
    }
    enquanto(pilha != NULL)
    {
        desempilha(posfixa[j]);
    }
}