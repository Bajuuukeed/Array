#include <bits/stdc++.h>
/*Fie N un număr întreg impar și un vector A cu N elemente. Pentru fiecare element Ai, acesta se poate incrementa cu 1. Fiecare element sepoate incrementa cel mult odată. Mai mult, se pot realiza cel mult K incrementări.

Scopul este de a maximiza medianul lui A. Medianul unui vector este definit ca fiind elementul din mijlocul vectorului după sortarea acestuia. De exemplu, medianul vectorului [5,8,2,9,1] este 5.*/
using namespace std;
int n, a[1001], k;
int main(){
    cin >> n >> k;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    for(int i = n/2+1; k && i <= n; ++i)
        a[i] ++, k--;
    sort(a + 1, a + n + 1);
    cout << a[n/2+1];
    return 0;
}