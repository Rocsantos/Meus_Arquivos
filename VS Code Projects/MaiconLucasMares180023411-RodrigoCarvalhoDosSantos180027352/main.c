#include<stdio.h>
#include "filavet.h"
#include "filacirc.h"
#include "filalist.h"

//Maicon Lucas Mares de Souza - 18/0023411
//Rodrigo Carvalho dos Santos - 18/0027352

/*
    Para adicionar uma biblioteca apague o comentário de um dos includes
*/

int menu();
int opcao,
/******/aux = 0,
/******/aux2 = 0,
/******/aux3 = 0;

int main()
{
    criafila();
    system("clear || cls");
    printf("Bem vindo... Esta e a ");
    identifica();
    getchar();
    system("clear || cls");
    while(menu());
    puts("Fechando o programa...");
    liberafila();
    getchar();
}

int menu()
{
    puts("-----------Fila-----------");
    puts("Selecione uma das opcoes");
    puts("1- Criar/Recriar Fila");
    puts("2- Inserir na Fila");
    puts("3- Remover na Fila");
    puts("4- Printar Fila");
    puts("Outro- Sair");

    scanf("%d", &opcao);

    switch(opcao)
    {
        case 1:
            liberafila();
            criafila();
            break;
        case 2:
            puts("Digite quantos elementos voce deseja inserir:");
            scanf("%d", &aux);
            for(int i = 0; i < aux; i++)
            {
                do
                {
                    printf("Digite o %dº numero\n", i + 1);
                    scanf("%d", &aux2);
                    if(aux2 > 999 || aux2 < 0)
                    {
                        puts("Por favor insira um numero entre 0 a 999");
                    }
                }
                while(aux2 < 0 || aux2 > 999);

                int resultado_insere = inserefila(aux2);
                if(resultado_insere == 1)
                {
                    printf("%03d Inserido com Sucesso\n", aux2);
                }
                else
                {
                    if (resultado_insere == -1)
                    {
                        printf("Ocorreu um Erro na Alocação");
                    }
                    aux3++;
                }
            }
            if(aux3)
            {
                printf("%d Nao foram inseridos na fila\n", aux3);
            }
            aux3 = 0;
            break;
        case 3:
            puts("Digite quantos elementos voce deseja remover da fila:");
            scanf("%d", &aux);
            for (int i = 0; i < aux; i++)
            {
                if(removefila(&aux2))
                {
                    printf("%03d Removido com Sucesso\n", aux2);
                }
                else
                {
                    puts("Nao e mais possivel remover da fila, pois ela esta vazia");
                    i = aux;
                }
            }
            break;
        case 4:
            imprimefila();
            break;
        case 9:
            printf("%d\n", tamanhofila());
        default:
            return 0;
            break;
    }
        getchar(); getchar();
        system("clear || cls");
        return 1;
}
