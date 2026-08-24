#include <bits/stdc++.h>
//Se dă o permutare a mulțimii {1, 2, ..., n} adică un șir cu n numere distincte cuprinse între 1 și n. Se mai dă și o valoare k. Fiind permise maximum k interschimbări de elemente aflate pe poziții consecutive, se cere determinarea permutării minime din punct de vedere lexicografic.
using namespace std;
string  nume = "gama";
ifstream in(nume + ".in");
ofstream out(nume + ".out");
typedef unsigned long long ull;
typedef long long  ll;
int main()
{
    int n, k, v[1000];
    in >> n >> k;
    for (int i = 1; i <= n; i++)
        in >> v[i];
    for (int i = 1; i <= n && k; i++)
    {
        int minn = v[i], pozMin = i;
        for (int j = i + 1; j <= n && j <= i + k; j++)
        {
            if (minn > v[j])
            {
                minn = v[j];
                pozMin = j;
            }
        }
        for (int j = pozMin; j > i; j--)
        {
            swap(v[j], v[j - 1]);
            k--;
        }
    }
    for (int i = 1; i <= n; i++)
        out << v[i] << ' ';
    
}