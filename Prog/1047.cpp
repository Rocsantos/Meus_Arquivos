#include <iostream>
using namespace std;

int main()
{
    int hi, mi, h, m, tempo;
    cin >> hi >> mi >> h >> m;
    m -= mi;
    h -= hi;
    if(!h && !m) h = 24;
    if(m < 0)
    {
        m += 60;
        h--;
    }
    if(h < 0) h += 24;

    cout << "O JOGO DUROU " << h << " HORA(S) E " << m << " MINUTO(S)\n";
    return 0;
}
