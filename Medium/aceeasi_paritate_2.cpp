#include <bits/stdc++.h>
//Se dau n numere întregi. Să se insereze între oricare două numere de aceeași paritate media lor aritmetică. Să se realizeze acest procedeu până nu se mai pot adăuga noi elemente.
using namespace std;
int main()
{
    int n , ok = 1 , a[100001];
    cin >> n;
    for(int i = 1 ; i <= n ; ++i) cin >> a[i];
    for(int i = 1 ; i <= n ; ++i) cout << a[i] << " ";
    cout << endl;
    while(ok == 1)
    {
        ok = 0;
        for(int i = 1 ; i <= n - 1;++i)
        {
            if(abs (a[i] % 2) == abs(a[i+1] % 2 ) && a[i] != a[i+1])
            {
                n++;
                for(int j = n ; j >= i+1 ; j--)
                    a[j + 1] = a[j];
                a[i + 1] = (a[i] + a[i+1]) / 2;
                ok = 1;
                i++;
            }
        }
        if(ok == 1)
        {
            for(int j = 1 ; j <= n ;++j)
                cout << a[j]<< " ";
            cout << endl;
        }
    }
    return 0;
}