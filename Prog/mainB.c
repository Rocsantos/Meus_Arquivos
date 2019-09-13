#include<stdio.h>

int f91(int a)
{
    if(a <= 100)
        return f91(f91(a + 11));
    else return a - 10;
}

int main()
{
    int n;
    scanf("%d", &n);
    while(n != 0)
    {
        printf("f91(%d) = %d\n", n, f91(n));
        scanf("%d", &n);
    }
    return 0;
}
