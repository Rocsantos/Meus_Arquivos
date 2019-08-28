#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX (1<<20) /* isso faz com que MAX equivala a 1 deslocado 20 casas para esquerda ou 10^19 */

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
    char funcao[MAX];
    scanf("%s", funcao);
    eposfixa = posfixafuncao(funcao);
    if (eposfixa == 1)
    {
        printf("%s\n", posfixa);
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
    int aux = 0;
    switch (c)
    {
        //case '(':
          //  aux = 4;
        case '^':
            aux = 3;
            break;
        case '*':
            aux = 2;
            break;
        case '/':
            aux = 2;
            break;
        case '+':
            aux = 1;
            break;
        case '-':
            aux = 1;
            break;
        default:
            break;
    }
    return aux;
}

int posfixafuncao(char *f)
{
    int j = 0;
    for(int i = 0; i < strlen(f); i++)
    {
        printf("%s\n", posfixa);
        celula *aux;
        aux = pilha;
        while (aux != NULL)
        {
            printf("%c", aux->dado);
            aux = aux->anterior;
        }
        printf("\n");
        char c = f[i], op, t;
        if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
            posfixa[j] = c;
            j++;
        }
        else
        {
            if(c == '(')
            {
                if(!empilha(c))
                {
                    return -1;
                }
            }
            else
            {
                if(c == ')')
                {
                    if(!desempilha(&op))
                    {
                        return 0;
                    }
                    while(op != '(')
                    {
                        posfixa[j] = op;
                        j++;
                        if(!desempilha(&op))
                        {
                            return 0;
                        }
                    }
                }
                else
                {
                    /* */if (pilha == NULL)
                    {
                        empilha(c);
                    }
                    else
                    {/* */
                        desempilha(&t);
                        if(prioridade(c) > prioridade(t))
                        {
                            empilha(t);
                            empilha(c);
                        }
                        else
                        {
                            while(prioridade(c) <= prioridade(t))
                            {
                                posfixa[j] = t;
                                j++;
                                desempilha(&t);
                            }
                            empilha(t);
                            empilha(c);
                        }
                /**/}/* */
                }
            }
        }
    }
    while(pilha != NULL)
    {
        desempilha(&posfixa[j]);
        if (posfixa[j] == '(')
        {
            return 0;
        }
        j++;
    }
    return 1;
}