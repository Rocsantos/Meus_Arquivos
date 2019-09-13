#include<bits/stdc++.h>

using namespace std;

int main(){
    int di, hi, mi, si;
    int df, hf, mf, sf;
    string n;
    scanf("%*s %d %d %*s %d %*s %d", &di, &hi, &mi, &si);
    scanf("%*s %d %d %*s %d %*s %d", &df, &hf, &mf, &sf);

    sf -= si;
    mf -= mi;
    hf -= hi;
    df -= di;

    if(sf < 0)
    {
        sf += 60;
        mf--;
    }
    if(mf < 0)
    {
        mf += 60;
        hf--;
    }
    if(hf < 0)
    {
        hf += 24;
        df--;
    }
    cout << df << " dia(s)\n" << hf << " hora(s)\n" << mf << " minuto(s)\n" << sf << " segundo(s)\n";
    return 0;
}
