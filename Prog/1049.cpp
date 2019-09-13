#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, b, c;
    cin >> a >> b >> c;
    if(a == "vertebrado")
    {
        if(b == "ave")
        {
            if(c == "carnivoro")
                printf("aguia\n");
            if(c == "onivoro")
                printf("pomba\n");
        }
        if(b == "mamifero")
        {
            if(c == "onivoro")
                printf("homem\n");
            if(c == "herbivoro")
                printf("vaca\n");
        }
    }
    if(a == "invertebrado")
    {
        if(b == "inseto")
        {
            if(c == "hematofago")
                printf("pulga\n");
            if(c == "herbivoro")
                printf("lagarta\n");
        }
        if(b == "anelideo")
        {
            if(c == "hematofago")
                printf("sanguessuga\n");
            if(c == "onivoro")
                printf("minhoca\n");
        }
    }
    return 0;
}
