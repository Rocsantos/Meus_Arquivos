#include<stdio.h>

int hanoi(int n, char origem, char destino, char temporario)
{
    if(n == 1)
    {
        //printf("move disco %d de %c  para %c\n", n, origem, destino);
        return 1;
    }
    else
    {
        //printf("move disco %d de %c  para %c\n", n, origem, destino);
        return hanoi(n - 1, origem, temporario, destino) + hanoi(n - 1, temporario, destino, origem) + 1;

    }
}

int main()
{
    int n, i = 1;
    do
    {
        scanf("%d", &n);
        if(n != 0)
            printf("Teste %d\n%d\n\n", i, hanoi(n, 'A', 'C', 'B'));
        i++;
    }while(n != 0);
    return 0;
}
