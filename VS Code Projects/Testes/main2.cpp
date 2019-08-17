#include <bits/stdc++.h>

#define leia cin
#define escreva cout
#define se if
#define senao else
#define enquanto while

using namespace std;

int setemraizinteira(int n, double indice) {
    double raiz_cubica = pow(n, 1.0/indice);
    int raiz_cubica_arredonda_para_inteiro = ceil(raiz_cubica); /// ceil arredonda pra cima
    se (raiz_cubica_arredonda_para_inteiro * raiz_cubica_arredonda_para_inteiro * raiz_cubica_arredonda_para_inteiro == n) {
        return raiz_cubica_arredonda_para_inteiro;
    }
    return -1;
}

int main () {
    int n;
    leia >> n;
    escreva << setemraizinteira(n, 3.0) << endl;
    return 0;
}
