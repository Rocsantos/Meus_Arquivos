#include<stdio.h>

int n, p1, p2, p3;

int main()
{
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &n);
        if(!(n % 2)) p1++;
        if(n > 0) p2++;
        if(!n) p3++;
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", p1, 5 - p1, p2, 5 - p2 - p3);
    return 0;
}
