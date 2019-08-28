#include <stdio.h>
#include <string.h>

char *extraiSobrenome(char *n)
{
    for (int i = 0; i < strlen(n); i++)
    {
        if (n[i] == '_')
        {
            n[i] = '\0';
            return n+(i + 1);
        }
        
    }
    
}

int main()
{
    char nome[50],
        *sobrenome;
    scanf("%s", nome);
    sobrenome = extraiSobrenome(nome);
    printf("Nome\n%s\n", nome);
    printf("Sobrenome\n%s\n", sobrenome);
}