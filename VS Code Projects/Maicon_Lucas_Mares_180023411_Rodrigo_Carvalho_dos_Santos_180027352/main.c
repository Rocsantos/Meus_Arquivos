#include <stdio.h>
//#include "fila_int.h"
#include "fila_circular_com_redimensionamento.h"
//#include "filalist.h"
#include <stdlib.h>

//Maicon Lucas Mares de Souza - 180023411
//Rodrigo Carvalho dos Santos - 18/0027352

int main(int argc, char const *argv[]) {
    int option = 0, number = 0, tamanho_fila = 0, qtd_numbers = 0, captura = 0, saida = 0, *number_temp, count = 0, verificaAlocacao = 10, *y;
    y = malloc(sizeof(int));
    number_temp = &qtd_numbers;
    cria_fila();
    while (1) {
      printf("--------------------------------------------------------------\n");
      printf("Escolha uma das opções:\n");
      printf("1-Inserir n elementos na fila\n");
      printf("2-Remover n elementos na fila\n");
      printf("3-Reiniciar a fila\n");
      printf("4-Imprimir a fila\n");
      printf("5-Sair\n");
      scanf("%d", &option);
      system("clear");
      switch (option) {
        case 1:
          count = 0;
          if(!fila_cheia() || (fila_cheia() == 2)){ //Fila cheia só retorna 2 quando é uma fila circular com redimensionamento
            printf("Digite a quantidade de elementos que deseja adicionar na fila\n");
            scanf("%d", &qtd_numbers);
            for(int i = 0; i < qtd_numbers; i++) {
              printf("Digite o %dº número que deseja adicionar: ", i+1);
              scanf("%d", &number);
              count ++;
              if (!fila_cheia() || fila_cheia() == 2){
                if (number > 999 || number < -999){
                  printf("Não é permitido adicionar números com mais de 3 dígitos!\n");
                  break;
                } 
                insere_fila(number);
              } else if(fila_cheia()) {
                printf("Não é possível adicionar mais elementos, pois a fila está cheia.\n%d elemento(s) não couberam na fila!\n", *number_temp - count + 1);
                break;
              }
            }
          } else {
            printf("Não é possível adicionar elementos na fila, pois ela está cheia!\n");
            break;
          } 
          break;
        case 2:
          if (fila_vazia()){
            printf("Não é possível remover elementos da fila, pois ela está vazia.\n");
          } else {
            printf("Digite a quantidade de elementos que deseja remover da fila\n");
            scanf("%d", &qtd_numbers);
            for (int i = 0; i < qtd_numbers; ++i)
            {
              if (!fila_vazia()){
                remove_fila(y);
                if (fila_vazia()){
                  printf("Não é possível remover mais elementos da fila, pois ela está vazia!\n");
                  break;
                }
                printf("O número %3d foi removido da fila!\n", *y);
              } else {
                printf("Não é possível remover mais elementos da fila, pois ela está vazia!\n");
                break;
              }
            }
          }
          break;
        case 3:
          cria_fila();
          break;
        case 4:
          imprimir_fila();
          break;
        case 5: printf("Até mais tarde...\n");
          exit(0);
          break;
      }

    }
  return 0;
}
