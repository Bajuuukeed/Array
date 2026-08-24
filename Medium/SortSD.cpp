#include <iostream>
#include <fstream>
//Se dau n numere naturale. Afișați aceste numere ordonate crescător după suma divizorilor. Dacă două numere au aceeași sumă a divizorilor, se va afișa mai întâi cel mai mic.
using namespace std;
int main()
{
    int n;
    cin >> n;
    int v[1000];
    int pidar[10000];
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    for (int i = 1; i <= n; i++) {
        int suma = 0;
        for (int z = 1; z * z <= v[i]; z++) {
            if (v[i] % z == 0) {
                suma = suma + z;
                if (z != v[i] / z) {
                    suma = suma + v[i] / z;
                }
            }
        }
        pidar[i] = suma;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (pidar[i] > pidar[j]) {
                swap(pidar[i], pidar[j]);
                swap(v[i], v[j]);
            }
            if (pidar[i] == pidar[j]) {
                if (v[i] > v[j]) {
                    swap(v[i], v[j]);
                }
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << v[i] << ' ';
    }
}