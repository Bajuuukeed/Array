#include <iostream>
#include <fstream>
//Se dă un vector cu n elemente, numere naturale. Afișați în ordine crescătoare elementele iar după fiecare element, inserați indicele poziției pe care acesta se afla înainte ca vectorul să fie sortat.
using namespace std;
ifstream in("halfsort4.in");
ofstream out("halfsort4.out");
int main()
{

    int n;
    cin >> n;
    int v[1000];
    int a[1000];
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        a[i] = v[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (v[i] > v[j]) {
                swap(v[i], v[j]);
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int z = 1; z <= n; z++) {
            if (v[i] == a[z] && v[i] >= 0 && a[z] >= 0) {
                cout << v[i] << ' ' << z << ' ';
                a[z] = -1;
            }
        }
    }
}