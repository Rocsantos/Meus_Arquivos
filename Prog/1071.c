#include<stdio.h>

void troca(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
    return;
}

int main()
{
    int x, y, soma = 0;
    scanf("%d %d", &x, &y);

    if(x > y)
        troca(&x, &y);

    for(int i = x + 1; i < y; i++)
    {
            if(i % 2 != 0)
                soma += i;
    }
    printf("%d\n", soma);
    return 0;
}
