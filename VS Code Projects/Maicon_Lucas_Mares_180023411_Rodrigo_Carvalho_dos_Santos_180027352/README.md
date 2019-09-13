# TRABALHO EDA1 - 2019.1 (UnB - Gama)

##Alunos:
- Maicon Lucas Mares de Souza - 18/0023411
- Rodrigo Carvalho dos Santos - 18/0027352

##Documentação das funções:
- Fila com vetor fixo
  - **void cria_fila()**: Apenas inicializa os apontadores p e u com valor 0. 
  - **int insere_fila(int elemento)**: Retorna 1 em caso de sucesso e 0 caso contrário.
  - **int remove_fila(int *y)**: Retorna 1 em caso de sucesso e 0 caso contrário.
  - **int fila_vazia()**: Retorna 1 em caso de sucesso e 0 caso contrário.
  - **int fila_cheia()**: Retorna 1 em caso de sucesso e 0 caso contrário.
  - **int qtd_elementos()**: Retorna a quantidade de elementos fazendo a subtração u-p.
  - **void imprimir_fila()**: Apenas faz a impressão do vetor.

- Fila circular com redimensionamento:
  - **void cria_fila()**: Inicializa os apontadores p e u com valor 0, aloca memória para o 			         ponteiro fila e define N com valor inteiro 5.
  - **int insere_fila(int elemento)**: Retorna 1 ou 2 em caso de sucesso e 0 caso contrário. Pode 					      retornar 2 devido a função fila_cheia() que é chamada.
  - **int remove_fila(int *y)**: Retorna 1 em caso de sucesso e 0 caso contrário.
  - **int fila_vazia()**: Retorna 1 em caso de sucesso e 0 caso contrário.
  - **int fila_cheia()**: Retorna 2 em caso de sucesso e 0 caso contrário.
  - **int qtd_elementos()**: Quando o apontador p é menor que u retorna o total = u-p e quando p é 			            maior que u retorna total = N + total, sendo o total igual a u-p, logo 				    retorna total = N + (u-p).
  - **int redimensiona()**: Apenas faz o aumento do tamanho da fila analisando se u vem antes de 			   p ou não, se sim, verifica se há menos elementos à esquerda ou à 			           direita e muda os elementos de lugar de acordo com o menor gasto de 				   tempo. Retorna 0 se não conseguir alocar o vetor e retorna 1 caso 				   contrário. 
  - **void libera()**: Desaloca o vetor com a função free().
  - **void imprimir_fila()**: Apenas faz a impressão da fila analisando se p vem antes de u ou se 				      u vem antes de p.

- Fila de lista encadeada:
  - **void cria_fila()**: Aloca memória para as structs cabeca e fila e encerra o programa caso 				 haja problema na alocação na criação.
  - **int insere_fila(int elemento)**: Retorna 1 em caso de sucesso, e -1 caso contrário.
  - **int remove_fila(int *y)**: Retorna 1 em caso de sucesso e 0 caso contrário.
  - **int fila_vazia()**: Retorna 1 caso vazio, e 0 caso contrário.
  - **int fila_cheia()**: Retorna 1 caso cheia, e 0 caso contrário.
  - **int qtd_elementos()**: Retorna tamanho da fila percorrendo da struct fila até a struct 				     cabeca.
  - **void imprimir_fila()**: Imprime a fila normalmente como fizemos com a fila de vetor.

