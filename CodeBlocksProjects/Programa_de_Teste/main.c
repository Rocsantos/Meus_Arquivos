#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>
#include <conio.h>

void limpatela();
short menu();
int cadastrar();

typedef struct POKEMON
{
    int numero;
    char nome[20];
    char tipo[5][10];
    char fraqueza[5][10];
    char altura[4];
    char peso[6];
    char categoria[10];
    char descricao[500];
    struct POKEMON *novo;
    struct POKEMON *atual;
}pok;

pok *pokemon;

int main()
{
    system("color 46");
    while(menu());
    limpapokedex();
    return 0;
}

int cadastrar()
{
    pok *novo = malloc(sizeof(pok));
    if(novo == NULL)
    {
        return 0;
    }
    novo->novo = pokemon;
    if(pokemon->atual == NULL)
    {
        pokemon->numero = 1;
    }
    else
    {
        pokemon->numero = pokemon->atual->altura;
    }
    char nome[20];
    char tipo[5][10];
    char fraqueza[5][10];
    char altura[4];
    char peso[6];
    char categoria[10];
    char descricao[500];
    puts("Digite o nome do Pokemon:");
    scanf("%s", nome);
    pokemon->nome[0] = &nome[0];
}

void limpatela()
{
    #ifdef WIN32
    getch();
    system("cls");
    return;
    #endif // WIN32
    getchar();
    system("clear");
    return;
}

short menu()
{
    short int opcao;
    puts("\t\tPokedex\n");
    puts("1- Cadastrar Pokemon");
    puts("2- Remover Pokemon");
    puts("3- Buscar Pokemon");
    puts("4- Printar Pokemons Cadastrados");
    puts("5- Sair da Pokedex");
    scanf("%d", &opcao);

    switch(opcao)
    {
        case 1:
            cadastrar();
            break;
        case 5:
            puts("Saindo do Programa...");
            return 0;
        default:
            printf("Opção não disponivel\n");
            break;
    }
    limpatela();
    return 1;
}
