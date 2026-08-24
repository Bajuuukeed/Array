#include <bits/stdc++.h>
//Se citește un număr natural n cu cel mult 16 cifre. Fie q numărul de cifre ale numărului n. Prin eliminarea unei singure cifre din scrierea numărului n se obține un șir de q numere. Să se afișeze în ordine crescătoare, numerele nenule din acest șir care sunt prime cu numărul n.
using namespace std;
ifstream in("numere16.in");
ofstream out("numere16.out");
int prim(long long int a , long long int b)
{
    while(b)
    {
        long long int r=a%b;
        a=b;
        b=r;
    }
    if(a==1)
        return 1;
    else
        return 0;
}
int main()
{
    long long int n;
    in >> n;
    long long int a[17];
    long long int cn=n;
    int cnt=0;
    while(cn)
    {
        cnt++;
        cn/=10;
    }
    long long int p = 10;
    a[0]=n/10;
    for(int i =  1 ; i <= cnt ; ++i)
    {
        cn=n;
        cn=cn/(p*10);
        a[i]=cn*p+n%p;
        p*=10;
    }
    sort(a , a+cnt);
    int ok=0;
    for(int i = 0 ; i < cnt ; ++i)
    {
        if(prim(n , a[i]))
        {
            ok=1;
            if(a[i]!=0)
                out << a[i] << ' ';
        }
    }
    if(ok==0)
        out << "NU EXISTA";
    return 0;
}