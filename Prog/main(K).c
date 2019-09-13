#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define M 1000000

char decode(char a)
{
    if(a < 'N' && a >= 'A')
        a += 13;

    else if(a <= 'Z' && a >= 'N')
        a -= 13;

    else if(a < 'n' && a >= 'a')
        a += 13;

    else if(a <= 'z' && a >= 'n')
        a -= 13;
    return a;
}

int main()
{
    int a;
    char txt[M];
    while(1)
    {
        int j = 0;
        a = gets(txt);
        fflush(stdin);
        if(a == NULL) break;
        for(int i = 0; i < strlen(txt); i++)
        {
            if(txt[i] == 'p')
            {
                printf("%c", decode(txt[i + 1]));
                j++;
                i++;
            }
            else
            {
                printf("%c", decode(txt[i]));
                j++;
            }
        }
        printf("\n");
    }
    return 0;
}
