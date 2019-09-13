#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char txt[1001], out[501];
    gets(txt);
    int tam = strlen(txt), j = 0;
    for(int i = 0; i < tam; i++)
    {
        if(txt[i] == 'p')
        {
            out[j] = txt[i + 1];
            j++;
            i++;
        }
        else
        {
            out[j] = txt[i];
            j++;
        }
    }
    out[j] = '\0';
    printf("%s\n", out);
    return 0;
}
