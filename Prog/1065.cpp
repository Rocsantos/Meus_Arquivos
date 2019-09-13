#include<stdio.h>

int main()
{
    int n, p(0);
    for(int i =0; i < 5; i++)
    {
        scanf("%d", &n);
        if(!(n % 2)) p++;
    }
    printf("%d valores pares\n", p);
    return 0;
}
