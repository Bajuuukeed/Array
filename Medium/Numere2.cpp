#include <bits/stdc++.h>
//Gigel a găsit un șir cu n numere naturale. În fiecare zi Gigel parcurge șirul și când găsește o pereche de elemente consecutive egale o elimină din șir și se oprește. Determinați în câte zile va elimina Gigel elemente din șir și care sunt valorile din șir după eliminări.
using namespace std;
ifstream in("numere2.in");
ofstream out("numere2.out");
int main()
{
    int n , a[25001] , cnt = 0;
    in >> n;
    for(int i = 1 ; i <= n ; i++)
    {
        in >> a[i];
        if(a[i]==a[i-1])
            cnt++ , n-=2 , i-=2;
    }
    out << cnt << endl;
    for(int i = 1 ; i <= n ; i++)
        out << a[i] << ' ';
    return 0;
}