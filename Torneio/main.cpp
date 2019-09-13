#include<bits/stdc++.h>

using namespace std;

const int N = 1e7 + 10;

int f[N];

int fibo(int x)
{
    if(x == f[0] || x == f[1] || f[x] != 0) return f[x];
    else
    {
        f[x] = fibo(x - 1) + fibo(x - 2);
        return f[x];
    }
}

int main()
{
    int n;
    f[0] = 0;
    f[1] = 1;
    cin >> n;
    fibo(n);
    for(int i = 0; i < n; i++)
        cout << f[i] << " ";
    cout << endl;

    return 0;
}
