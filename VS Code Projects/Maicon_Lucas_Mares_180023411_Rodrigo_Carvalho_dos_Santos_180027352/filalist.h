#ifndef _FILALIST_H
#define _FILALIST_H

//Maicon Lucas Mares de Souza - 180023411
//Rodrigo Carvalho dos Santos - 18/0027352

void cria_fila(); //Encerra o programa caso haja problema na alocação na criação
int insere_fila(int x);//Retorna 1 em caso de sucesso, e -1 caso contrário*/
int remove_fila(int *y);//Retorna 1 em caso de sucesso */
int fila_cheia();//Retorna 1 caso cheia, e 0 caso contrário */
int fila_vazia();/*********5*//* Retorna 1 caso vazio, e 0 caso contrário */
int qtd_elementos();/*******6*//* Retorna tamanho da fila */
void imprimir_fila();/******7*//* Imprime fila */

#endif // _FILALIST_H
