#ifndef _FILA_H
#define _FILA_H

#include <stdio.h>
#include <stdlib.h>

//Maicon Lucas Mares de Souza - 180023411
//Rodrigo Carvalho dos Santos - 18/0027352

static int N = 5;
static int p, u, *fila;

void *mallocc(size_t z);/******1*/
void criafila();/**************2*/
int inserefila(int elemento);/*3*/
int estacheia();/**************4*/
int estavazia();/**************5*/
int removefila(int *y);/*******6*/
int tamanhofila();/************7*/
int redimensiona();/***********8*/
void imprimefila();/***********9*/
void identifica();/***********10*/
void liberafila();/***********11*/

#endif // _FILA_H