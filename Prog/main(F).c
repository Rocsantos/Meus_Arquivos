#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int cont(char n1, char n2)
{
    int a = (int) n1 - '0';
    int b = (int) n2 - '0';
    return 10 * a + b;
}

int main()
{
    while(1)
    {
        char hms[9];
        int a = scanf("%s", hms);
        if(a != EOF)
            printf("%d\n", 86400 - cont(hms[0], hms[1]) * 3600 - cont(hms[3], hms[4]) * 60 - cont(hms[6], hms[7]));
        if(a == EOF)
            break;
    }
    return 0;
}
