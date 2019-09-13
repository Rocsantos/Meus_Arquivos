#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int a, triagem = 0;
    char txt[4];

    do
    {
        int count = 0;
        for(int i = 0; i < 10; i++)
        {
            a = scanf("%s", txt);
            if(strcmp(txt, "sim") == 0)
            count++;
        }
        if(count % 2 != 0)
            triagem += count / 2;
        else
            triagem += (count / 2) - 1;

    }while(a != EOF);

    printf("%d\n", triagem);

    return 0;
}
