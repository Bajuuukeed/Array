#include <iostream>
//Se dă un vector cu n elemente, numere naturale. Afișați în ordine crescătoare valorile prime din vector.
using namespace std;
int main()
{
    int n;
    cin >> n;
    int v[1000];
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (v[i] > v[j]) {
                swap(v[i], v[j]);
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        int ct = 0;
        for (int z = 1; z * z <= v[i]; z++) {
            if (v[i] % z == 0) {
                ct += 2;
            }
            if (z * z == v[i]) {
                ct--;
            }
        }
        if (ct == 2) {
            cout << v[i] << ' ';
        }
    }
}

