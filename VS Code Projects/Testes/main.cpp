#include <bits/stdc++.h>

#define leia cin
#define escreva cout
#define se if
#define senao else
#define enquanto while

int quantidade_de_caixas,
    maximo_de_caixa_na_pilha,
    caixa_mi,
    caixa_anterior = (1 << 20),
    contador_de_caixas_na_pilha,
    soma_de_massas;

bool pilha_cheia = false;

using namespace std;

int main () {
    ///escreva << caixa_anterior << endl; /* Apague aqui pra vc o que � o 1 << 20*/
    leia >> quantidade_de_caixas >> maximo_de_caixa_na_pilha;
    enquanto (quantidade_de_caixas--) {
        leia >> caixa_mi;
        se(contador_de_caixas_na_pilha == maximo_de_caixa_na_pilha) {
            ///escreva << "pilha cheia\n"; /* Quando rodar o programa tu vai ver quando foi a ultima massa colocada na pilha*/
            pilha_cheia = true;
        }
        se (caixa_anterior >= caixa_mi && !pilha_cheia) {
            soma_de_massas +=  caixa_mi;
            ///escreva << "add a pilha " << caixa_mi << endl; /* Quando rodar tu vai ver todas as massas que foram colocadas*/
            caixa_anterior = caixa_mi;
            contador_de_caixas_na_pilha++;
        }
    }
    escreva << soma_de_massas << endl;
    return 0;
}
