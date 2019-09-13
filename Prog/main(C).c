#include<stdio.h>

int main()
{
    int n;
    do
    {
        int r, w = 0;
        scanf("%d", &n);
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &r);
            if(r % 2 == 0)
                w++;
        }
        if(n != 0)
            printf("Alice ganhou %d e Beto ganhou %d\n", w, n - w);
    }while(n);
    return 0;
}
