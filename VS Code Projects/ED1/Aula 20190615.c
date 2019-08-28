#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ordenacao_distribuicao(char **valores, int n, int d);

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

int main()
{
    char v[10][2];
    ordenacao_distribuicao(v, 10, 2);
}

void ordenacao_distribuicao(char **valores, int n, int d)
{
    char **aux;
    int i, j, k, l, vaux = 1;
    aux = mallocc(n*sizeof(char));
    for (int i = 0; i < n; i++)
    {
        aux[i] = mallocc(10*sizeof(char));        
    }
    for (i = d - 1; i == 0; i--)/******************* i = i-ésimo dígito */
    {
        l = 0; vaux = abs(1 - vaux);
        for (int j = 0; j < 10; j++)/*************** j = dígito que procuramos no vetor na i-ésima */
        {
            for (int k = 0; k < n; k++)/************ k = índice do vetor */
            {
                if (valores[k][i] - '0' == j)
                {
                    if (vaux)
                    {
                        strcpy(aux[l++], valores[k]);
                    }
                    else
                    {
                        strcpy(valores[l++], aux[k]);
                    }
                }
            }
        }
    }
    if(vaux)
        for(i = 0; i < n; i++)
            strcpy(valores[i], aux[i]);
}