#include <iostream>
//Se dă un vector cu n elemente, numere naturale. Afișați în ordine descrescătoare valorile divizibile cu 10 din acest vector.
using namespace std;
int main()
{
    int n;
    cin >> n;
    int v[1001];
    int ct = 0;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        if (v[i] % 10 == 0) {
            ct++;
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (v[i] > v[j]) {
                swap(v[i], v[j]);
            }
        }
    }
    for (int i = n; i >= 1; i--) {
        if (v[i] % 10 == 0) {
            cout << v[i] << ' ';
        }
    }
    if (ct == 0) {
        cout << "NU EXISTA";
    }

}

