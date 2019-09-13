#include<stdio.h>
#include<conio.h>
#include "filavet.h"
///#include "filacirc.h"
///#include "filalist.h"

int menu();
int opcao,
/******/aux = 0,
/******/aux2 = 0,
/******/aux3 = 0;

int main()
{
    criafila();
    while(menu());
    puts("Fechando Programa...");
    getch();
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
            criafila();
            break;
        case 2:
            puts("Digite quantos elementos voce deseja inserir");
            scanf("%d", &aux);
            for(int i = 0; i < aux; i++)
            {
                do
                {
                    scanf("%d", &aux2);
                    if(aux2 >= 1000)
                    {
                        puts("Por favor insira um n�mero entre 0 a 999");
                    }
                }while(aux2 < 0 && aux2 > 1000);

                if(inserefila(aux2))
                    printf("%d Inserido com Sucesso\n", aux2);
                else
                {
                    aux3++;
                }
            }
            printf("%d Nao couberam na fila\n", aux3);
            aux3 = 0;
            break;
        case 3:
            if(removefila(&aux))
                printf("%d Removido com Sucesso\n", aux);
            else
                puts("Falha ao Remover");
            break;
        case 4:
            imprimefila();
            break;
        default:
            return 0;
            break;
    }
        getch();
        system("clear || cls");
        return 1;
}
