#ifndef _FILALIST_H
#define _FILALIST_H

void criafila();/**********1*//* Encerra o programa caso haja problema na alocação da criacao */
int inserefila(int x);/****2*//* Retorna 1 em caso de sucesso de alocacao, e -1 caso contrario*/
int removefila(int *y);/***3*//* Retorna 1 em caso de sucesso, e 0 caso contrario*/
int estacheia();/**********4*//* Retorna 1 caso cheia, e 0 caso contrario */
int estavazia();/**********5*//* Retorna 1 caso vazio, e 0 caso contrario */
int tamanhofila();/********6*//* Retorna tamanho da fila */
void imprimefila();/*******7*//* Imprime fila */
void identifica();/********8*//* Imprime o nome da Biblioteca */
void liberafila();/********9*//* Libera espaço na memória usado pela fila */
void *mallocc(size_t z);/*10*//* Função para otimizar excessão na alocação */

#endif // _FILALIST_H
