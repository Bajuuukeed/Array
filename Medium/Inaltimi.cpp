#include <iostream>
//Se dau înălțimile a n copii, numerotați de la 1 la n, exprimate prin numere naturale. Afișați numerele de ordine ale copiilor în ordinea crescătoare a înălțimii lor.
using namespace std;
int main()
{
    int n;
    cin >> n;
    int v[1001];
    int c[1001];
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        c[i] = v[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (v[i] > v[j]) {
                swap(v[i], v[j]);
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int l = 1; l <= n; l++) {
            if (v[i] == c[l]) {
                cout << l << ' ';
                break;
            }
        }
    }

}

