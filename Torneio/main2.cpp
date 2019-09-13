#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<long long int> n;
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
        n[i] = s[i] / 25;
        printf("%lld", n[i]);
    }
    return 0;
}
