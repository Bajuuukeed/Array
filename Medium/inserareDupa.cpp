#include <iostream>
#include <cmath>
//Să se insereze într-un șir după fiecare element par dublul său.
using namespace std;
int main() {
    int n;
    cin >> n;
    int v[25];
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        if (v[i] % 2 == 0) {
            cout << v[i] << ' ' << 2 * v[i] << ' ';
        }
        else {
            cout << v[i] << ' ';
        }
    }
}