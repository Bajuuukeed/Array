#include <bits/stdc++.h>
//Pentru un sir de n numere naturale reprezentand inaltimile unor cladiri , sa se raspunda la o intrebare pentru fiecare element .
using namespace std;
ifstream fin("arhitectura2.in");
ofstream fout("arhitectura2.out");
int a[2000003];
int main()
{
    int n;
    fin >> n;
    a[0]=0 , a[n+1]=0;
    for(int i = 1 ; i <= n ; ++i)
        fin >> a[i];
    sort(a+1,a+n+1);
    for(int i = n ; i >= 1 ; --i)
        fout << a[i] << ' ';
    fout << endl;
    for(int i = n ; i >= 1 ; --i)
    {
        if(a[i]*2==a[i+1]+a[i-1])
            fout << 1 << ' ';
        else
            fout << 0 << ' ';
    }
    return 0;
}


