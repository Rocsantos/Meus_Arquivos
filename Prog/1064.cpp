#include<iostream>
#include<stdio.h>

using namespace std;

int p;

int main()
{
    float n, m(0);
    for(int i = 0; i < 6; i++)
    {
        cin >> n;
        if(n > 0)
        {
            p++;
            m += n;
        }
    }
    printf("%d valores positivos\n%.1f", p, (m / p));
    return 0;
}
