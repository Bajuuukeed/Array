#include <bits/stdc++.h>
//Dându-se un vector de n numere, trebuie rearanjate valorile din vector astfel încât (v[1] - v[2]) * (v[3] - v[4]) * …. * (v[n-1] * v[n]) sa fie maxim.
using namespace std;
int v[300005];
int a[150005];
int b[150005];
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    sort(v + 1, v + n + 1);
    for (int i = 1; i <= n / 2; i++) {
        a[i] = v[i];
    }
    for (int i = n / 2 + 1; i <= n; i++) {
        b[i - n / 2] = v[i];
    }
    bool produs_zero = false;
    for (int i = 1; i <= n / 2; i++) {
        if (a[i] == b[i]) {
            produs_zero = true;
            break;
        }
    }
    if (produs_zero) {
        for (int i = 1; i <= n; i++) {
            cout << v[i] << ' ';
        }
    }
    else {
        if ((n / 2) % 2 == 0) {
            for (int i = 1; i <= n / 2; i++) {
                cout << a[i] << ' ' << b[i] << ' ';
            }
        }
        else {
            for (int i = 1; i < n / 2; i++) {
                cout << a[i] << ' ' << b[i] << ' ';
            }
            cout << b[n / 2] << ' ' << a[n / 2] << ' ';
        }
    }

    return 0;
}