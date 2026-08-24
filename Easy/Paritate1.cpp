#include <iostream>
#include <iomanip>
#include <cmath>
//Se dă un șir cu n elemente, numere naturale. Determinați diferența în valoare absolută dintre numărul de valori pare din șir și numărul de valori impare din șir.
using namespace std;
int main()
{
    int n, x, catpar = 0, catimp = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> x;
        if (x % 2 == 0) catpar++;
        else
            catimp++;
    }
    cout << abs(catpar - catimp);
    return 0;
}