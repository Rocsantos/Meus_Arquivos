#ifndef _FILAVET_H
#define _FILAVET_H

void criafila();/*********1*//* Cria uma nova fila */
int inserefila(int x);/***2*//* Retorna 1 se o numero for inserido com sucesso, 0 caso contrario */
int removefila(int *y);/**3*//* Retorna 1 se o numero for removido com sucesso, 0 caso contrario, e devolve y com o valor do numero removido */
int estacheia();/*********4*//* Retorna 1 se a fila estiver cheia, 0 caso contrario */
int estavazia();/*********5*//* Retorna 1 se a fila estiver vazia, 0 caso contrario */
int tamanhofila();/*******6*//* Retorna o tamanho da fila */
void imprimefila();/******7*//* Imprime a fila */
void identifica();/*******8*//* Imprime o nome da Biblioteca */
void liberafila();/*******9*//* Função Inutil para fins didático */

#endif // _FILAVET_H
