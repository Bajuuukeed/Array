#include <iostream>
#include <fstream>
//Se dă un vector cu n elemente, numere naturale distincte. Ordonați crescător elementele situate înaintea valorii maxime din vector și descrescător elementele situate după această valoare.
using namespace std;
int main()
{
    int n;
    cin >> n;
    int v[1001];
    int max = 0;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        if (v[i] > max) {
            max = v[i];
        }
    }
    int imax = 0;
    for (int i = 1; i <= n; i++) {
        if (v[i] == max) {
            imax = i;
            break;
        }
    }
    int primsort = imax - 1;
    int aldoisort = imax + 1;
    for (int i = 1; i <= primsort; i++) {
        for (int j = i + 1; j <= primsort; j++) {
            if (v[i] > v[j]) {
                swap(v[i], v[j]);
            }
        }
    }
    for (int i = aldoisort; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (v[i] > v[j]) {
                swap(v[i], v[j]);
            }
        }
    }
    for (int i = 1; i <= primsort; i++) {
        cout << v[i] << ' ';
    }
    cout << max << ' ';
    for (int i = n; i >= aldoisort; i--) {
        cout << v[i] << ' ';
    }
    
}

