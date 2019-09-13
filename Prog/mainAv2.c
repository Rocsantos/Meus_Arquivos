#include<stdio.h>
#include<stdlib.h>

int hanoi(int x)
{
    if(x == 1)
    {
        return 1;
    }
    else
        return 2 * hanoi(x - 1) + 1;
}

int main()
{
    int n, i = 1;
    while(n != 0)
    {
        scanf("%d", &n);
        if(n != 0)
            printf("Teste %d\n%d\n\n", i, hanoi(n));
        i++;
    }
    return 0;
}
