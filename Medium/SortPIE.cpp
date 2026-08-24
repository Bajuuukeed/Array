#include <iostream>
#include <fstream>
//Se dă un vector cu n elemente, numere naturale. Afișați în ordine descrescătoare valorile din vector care sunt prime cu ultimul element al vectorului.
using namespace std;
bool VerifPrim(int a, int b) {
    int x = a;
    int y = b;
    while (x != y) {
        if (x > y) {
            x = x - y;
        }
        else {
            y = y - x;
        }
    }
    if (y == 1) {
        return true;
    }
    else {
        return false;
    }
}
int main()
{
    int n;
    cin >> n;
    int v[1001];
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    int p = v[n];
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (v[i] > v[j]) {
                swap(v[i], v[j]);
            }
        }
    }
    for (int i = n; i >= 1; i--) {
        if (VerifPrim(v[i], p) == 1) {
            cout << v[i] << ' ';
        }
    }
}

