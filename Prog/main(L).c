#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    char word[43];
    for(int i = 0; i < n; i++)
    {
        char on = 'O';
        scanf("%s", word);
        for(int j = 1; j < strlen(word); j++)
        {
            if(word[j - 1] < 'a' && word[j] >= 'a')
            {
                if((word[j]) <= (word[j - 1] + 'a' - 'A'))
                {
                    on = 'N';
                    break;
                }
            }
            else if(word[j - 1] >= 'a' && word[j] < 'a')
            {
                if((word[j] + 'a' - 'A') <= word[j - 1])
                {
                    on = 'N';
                    break;
                }
            }
            else
            {
                if(word[j] <= word[j - 1])
                {
                    on = 'N';
                    break;
                }

            }
        }
        printf("%s: %c\n", word, on);
    }
    return 0;
}
