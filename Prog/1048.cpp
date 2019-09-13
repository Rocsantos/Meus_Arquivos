#include <bits/stdc++.h>

using namespace std;

int main()
{
    float sal, aju, nsal;
    cin >> sal;

    if(sal <= 400) aju = 0.15;
    else if(sal <= 800) aju = 0.12;
    else if(sal <= 1200) aju = 0.10;
    else if(sal <= 2000) aju = 0.07;
    else aju = 0.04;

    cout << fixed;
    cout.precision(2);

    cout << "Novo salario: " << sal + sal * aju << endl;
    cout << "Reajuste ganho: " << aju * sal << endl;

    cout << fixed;
    cout.precision(0);
    cout << "Em percentual: " << aju * 100 << " %\n";
    return 0;
}
