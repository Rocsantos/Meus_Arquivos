#include<stdio.h>
#include<stdlib.h>

typedef struct elem{
	int dado;
	struct elem *prox;
	}lista;
	
void imprime(lista *le)
{
	lista *p;
	for(p=le; p != NULL; p=p->prox)
		printf("%d ", p->dado);
}

void imprime_recursivo(lista *le){
	if(le!=NULL)
	{
		printf("%d ", le->dado);
		imprime_recursivo(le->prox);
	}
}

lista *busca(int x, lista *le)
{
	lista *p;
	for(p = le; p != NULL && p->dado != x; p = p->prox);
	return p;
}

lista *busca_recursiva(int x, lista *le)
{
	if(le != NULL) 
	{
		if(le->dado == x)
			return le;
		else
			return busca_recursiva(x, le->prox);
	}
}

int busca_insere(lista *le, int x, int y)
{
	lista *p = busca(y, le);
	if(p != NULL)
		return insere(x, p);
	else
		return 0;
}

int insere(int x, lista *le)
{
	lista *novo;
	novo = malloc(sizeof(lista));
	if(novo == NULL)
		return 0;
	novo->dado = x;
	novo->prox = le->prox;
	le->prox = novo;
	return 1;
}

int insere_posicao (lista *le, int x, int pos)
{
	lista *p = le;
	for(int i = 0; i < pos && p != NULL; i++)
		p = p->prox;
	if(p != NULL)
		return insere(x, p);
	return 0;
}

int remove(lista *le)
{
	lista *lixo = le->prox;
	if(lixo != NULL)
	{
		le->prox = lixo->prox;
		free(lixo);
		return 1;
	}
	return 0;
}

int main()
{
	lista *le;
	le = malloc(sizeof(lista));
	if(le == NULL)
		exit(EXIT_FAILURE);
	le->prox = NULL;
	return 0;
}
