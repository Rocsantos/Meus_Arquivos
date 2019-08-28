# TRABALHO EDA1 - 2019.1 (UnB - Gama)

##Alunos:
- Maicon Lucas Mares de Souza - 18/0023411
- Rodrigo Carvalho dos Santos - 18/0027352

##Documentação das funções:
- Fila com vetor fixo
  - **void criafila()**: Apenas inicializa os apontadores p e u com valor 0. 
  - **int inserefila(int x)**: Retorna 1 em caso de sucesso e 0 caso contrário.
  - **int removefila(int *y)**: Retorna 1 em caso de sucesso e 0 caso contrário.
  - **int estavazia()**: Retorna 1 em caso de sucesso e 0 caso contrário.
  - **int estacheia()**: Retorna 1 em caso de sucesso e 0 caso contrário.
  - **int tamanhofila()**: Retorna a quantidade de elementos fazendo a subtração u-p.
  - **void imprimefila()**: Apenas faz a impressão do vetor.
  - **void identifica()**: Apenas faz a impressão do nome da Biblioteca.
  - **void liberafila()**: Nesta biblioteca não faz nada.

- Fila circular com redimensionamento:
  - **void criafila()**: Inicializa os apontadores p e u com valor 0, aloca memória para o 			         ponteiro fila e define N com valor inteiro 5.
  - **int inserefila(int elemento)**: Retorna 1 ou -1 em caso de sucesso e 0 caso contrário. Pode 					      retornar -1 devido a função redimensiona() que é chamada.
  - **int removefila(int *y)**: Retorna 1 em caso de sucesso e 0 caso contrário.
  - **int estavazia()**: Retorna 1 em caso de sucesso e 0 caso contrário.
  - **int estacheia()**: Retorna 1 em caso de sucesso e 0 caso contrário.
  - **int tamanhofila()**: Quando o apontador p é menor que u retorna o total = u-p e quando p é 			            maior que u retorna total = N + total, sendo o total igual a u-p, logo 				    retorna total = N + (u-p).
  - **int redimensiona()**: Apenas faz o aumento do tamanho da fila analisando se u vem antes de 			   p ou não, se sim, verifica se há menos elementos à esquerda ou à 			           direita e muda os elementos de lugar de acordo com o menor gasto de 				   tempo. Retorna -1 se não conseguir alocar o vetor e retorna 1 caso 				   contrário. 
  - **void liberafila()**: Desaloca o vetor com a função free().
  - **void imprimiefila()**: Apenas faz a impressão da fila analisando se p vem antes de u ou se 				      u vem antes de p.
  - **void identifica()**: Apenas faz a impressão do nome da Biblioteca.

- Fila de lista encadeada:
  - **void criafila()**: Aloca memória para as structs cabeca e fila e encerra o programa caso 				 haja problema na alocação na criação.
  - **int inserefila(int x)**: Retorna 1 em caso de sucesso, e -1 caso contrário.
  - **int removefila(int *y)**: Retorna 1 em caso de sucesso e 0 caso contrário.
  - **int estavazia()**: Retorna 1 caso vazio, e 0 caso contrário.
  - **int estacheia()**: Retorna 1 caso cheia, e 0 caso contrário.
  - **int tamanhofila()**: Retorna tamanho da fila percorrendo da struct fila até a struct 				     cabeca.
  - **void imprimefila()**: Imprime a fila normalmente como fizemos com a fila de vetor.
  - **void identifica()**: Apenas faz a impressão do nome da Biblioteca.
  - **void liberafila()**: Desaloca o a fila completamente com a função free().
