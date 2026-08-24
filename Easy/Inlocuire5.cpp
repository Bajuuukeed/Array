#include <iostream>
#include <cmath>
#include <fstream>
//Se citește un vector cu n elemente, numere naturale. Să se înlocuiască ultimul element prim din vector cu 0, apoi să se afișeze vectorul.
using namespace std;
int main() {
    int n;
    cin >> n;
    int pozitie = 0;
    int v[1000];
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    for (int i = n; i >= 1; i--) {
        int ct = 0;
        for (int d = 1; d * d <= v[i]; d++) {
            if (v[i] % d == 0) {
                ct += 2;
            }
            if (d * d == v[i]) {
                ct--;
            }
        }
        if (ct == 2) {
            pozitie = i;
            break;
        }
    }
    for (int i = 1; i <= n; i++) {
        if (i != pozitie) {
            cout << v[i] << ' ';
        }
        else {
            cout << '0' << ' ';
        }
    }

    
}