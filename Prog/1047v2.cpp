#include <iostream>
#include <stdio.h>

using namespace std;

int t(int h, int m)
{
    return 60 * h + m;
}

int main()
{
    int hi, mi, h, m, tempo;
    cin >> hi >> mi >> h >> m;
    tempo = t(h, m) - t(hi, mi);
    h = tempo / 60;
    m = tempo - h * 60;
    if(!(tempo)) h = 24;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
    return 0;
}
