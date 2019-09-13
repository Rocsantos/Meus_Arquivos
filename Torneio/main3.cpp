#include <stdio.h>
#include <stdlib.h>

int main()
{
        double salario, vendas;
        scanf("%*s %lf %lf", NULL, &salario, &vendas);
        printf("TOTAL = R$ %.02lf\n", salario + (vendas * 0.15));
        return 0;
}

