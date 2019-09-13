#include<stdio.h>
#include<stdlib.h>

int main() {
    int n;
    do{
        scanf("%d", &n);
    }while(n < 1 || n >= 100);

    for(int i = 0; i < n; i++) { //Quantidade de linhas
        for(int j = 0; j <= i; j++) { //Quantidade de colunas
            printf("%02d", i + 1); //printa a quantidade de linha
            if (j != i) { //Pra colocar espaços, com exceção do ultimo número da linha
                printf(" ");
            }
        }
        printf("\n"); //quebra de linha
    }
    printf("\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            printf("%02d", j + 1); //Printar o valor da coluna
            if (j != i) {
                printf(" ");
            }
        }
        printf("\n");
    }
}