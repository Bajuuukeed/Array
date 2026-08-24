#include <bits/stdc++.h>
//Se citește un număr natural n și un șir de n numere întregi. Să se aranjeze elementele astfel încât în prima parte a șirului să fie valorile pare în ordine crescătoare, iar în partea a doua valorile impare, de asemenea în ordine crescătoare.
using namespace std;
int a[1001] , b[1001] , p1 , p2;
int main()
{
    int n;
    cin >> n;
    int x;
    for(int i = 1 ; i <= n ; ++i)
    {
        cin >> x;
        if(x%2==0)
            a[p1]=x , p1++;
        else
            b[p2]=x , p2++;
    }
    sort(a , a + p1);
    sort(b , b + p2);
    for(int i = 0 ; i < p1 ; ++i)
        cout << a[i] << ' ';
    for(int i = 0 ; i < p2 ; ++i)
        cout << b[i] << ' ';
    return 0;
}