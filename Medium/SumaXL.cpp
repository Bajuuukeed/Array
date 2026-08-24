#include <bits/stdc++.h>
//Se dau două numere, unul mare și unul mic, ambele pozitive. Calculați suma lor.
using namespace std;
ifstream in("sumaxl.in");
ofstream out("sumaxl.out");
int main()
{
    int a[10001] ,b[101] , m , n , p=1;
    in >> n;
    for(int i = n ; i >= 1  ; i--)
        in >> a[i];
    in >> m;
    while(m != 0)
    {
        b[p]=m%10;
        p++;
        m /= 10;
    }
    p--;
    if(p > n) n = p;
    int t = 0;
    for(int i = 1  ; i <= n ; i++)
    {
        int c = a[i] + b[i] + t;
        a[i] = c % 10;
        t = c / 10;
    }
    if(t > 0) a[++n]=t;
    for(int i = n ; i >= 1 ; i--)
        out <<a[i];
    return 0;
}