#include<bits/stdc++.h>

using namespace std;

    float sal, ir;

int main()
{
    cin >> sal;
    sal -= 2000;
    if(sal <= 0) cout << "Isento\n";
    else
    {
        if(sal <= 1000) ir = sal * 0.08;
        else
        {
            sal -= 1000;
            if (sal <= 1500) ir = sal * 0.18 + 1000 * 0.08;
            else
            {
                sal -= 1500;
                ir = sal * 0.28 + 1500 * 0.18 + 1000 * 0.08;
            }
        }
        printf("R$ %.2f\n", ir);
    }
    return 0;
}
