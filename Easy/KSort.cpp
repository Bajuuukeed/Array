#include <iostream>
#include <fstream>
//Se dă un vector cu n elemente, numere naturale și un număr k. Ordonați crescător primele k elemente ale vectorului și descrescător ultimele n-k elemente.
using namespace std;
int main()
{
    int n;
    int k;
    cin >> n;
    cin >> k;
    int v[1001];
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    for (int i = 1; i <= k; i++) {
        for (int j = i + 1; j <= k; j++) {
            if (v[i] > v[j]) {
                swap(v[i], v[j]);
            }
        }
    }
    for (int i = n-(n-k)+1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (v[i] > v[j]) {
                swap(v[i], v[j]);
            }
        }
    }
    for (int i = 1; i <= k; i++) {
        cout << v[i] << ' ';
    }
    for (int i = n; i >= n-(n-k)+1; i--) {
        cout << v[i] << ' ';
    }
}




