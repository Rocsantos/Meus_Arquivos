#include<iostream>

using namespace std;

int p;

int main()
{
    float n;
    for(int i = 0; i < 6; i++)
    {
        cin >> n;
        if(n > 0) p++;
    }
    cout << p << " valores positivos\n";
    return 0;
}
