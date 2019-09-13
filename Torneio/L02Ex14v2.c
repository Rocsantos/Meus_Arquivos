#include<stdio.h>

int transforma(int h, int m)
{
    return h * 60 + m;
}

int main()
{
    int num,num1;
    scanf("%d %d",&num,&num1);
    int h0, m0, h, m, duracao;
    h0 = num / 100;
    m0= num % 100;
    h = num1 / 100;
    m= num1 % 100;

    duracao = transforma(h, m) - transforma(h0, m0);
    if
    printf("%d:%.02d\n%d:%.02d\n%d", h0, m0, h, m, duracao, duracao * 30);
    return 0;
}
