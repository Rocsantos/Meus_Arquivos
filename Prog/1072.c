#include<stdio.h>

int main()
{
    int n, x, i = 0;
    scanf("%d", &n);
    for(int j = 0; j < n; j++)
    {
    scanf("%d", &x);
    if(x >= 10 && x <= 20) i++;
    }
    printf("%d in\n%d out\n", i, n -i);
    return 0;
}
