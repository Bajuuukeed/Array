#include <bits/stdc++.h>
using namespace std;
//Fişierul text sort2.in conţine, dispuse pe mai multe linii, cel mult 100 de numere naturale, cu cel mult 4 cifre fiecare. Să se afişeze în fişierul sort2.out, în ordine crescătoare, toate numerele din fişierul sort2.in care au cel mult 2 cifre.
ifstream in("sort2.in");
ofstream out("sort2.out");
int tr(int n)
{
    int cnt=0;
    while(n)
    {
        cnt++;
        n/=10;
    }
    if(cnt<=2)
        return 1;
    else
        return 0;
}
int main()
{
    int a[100];
    int i = 0;
    int ok=0;
    while(in >> a[i])
        i++;
    sort(a , a+i);
    for(int j = 0 ; j < i ; ++j)
    {
        if(tr(a[j]))
        {
            out << a[j] << ' ';
            ok++;
        }
    }
    if(ok==0)
        out << "NU EXISTA";
    return 0;
}