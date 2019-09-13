#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define M 1001

int degree = 0;

int mult9(char* a)
{
    degree++;
    char str1[M];
    long long int b = 0;
    for(int i = 0; i < strlen(a); i++)
    {
        b += (int) a[i] - 48;
    }
    sprintf(str1, "%lld", b);
    if(b == 9)
        return 1;
    else if(b < 9)
        return 0;
    return mult9(str1);
}
int main()
{
    char str[M];
    while(str[0] != '0')
    {
        scanf("%s", &str);

        if(mult9(str))
            printf("%s is a multiple of 9 and has 9-degree %d.\n", str, degree);

        else if(str[0] != '0')
            printf("%s is not a multiple of 9.\n", str);

        degree = 0;
    }
    return 0;
}
