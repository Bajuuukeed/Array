#include <iostream>
#include <cmath>
//Să se insereze într-un șir înaintea fiecărui element pătrat perfect rădăcina sa pătrată.
using namespace std;
int main() {
    int n;
    cin >> n;
    int v[25];
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    for (int i = 1; i <= n; i++) {
        if (sqrt(v[i]) == (int)sqrt(v[i])) {
            cout << sqrt(v[i]) << ' ' << v[i] << ' ';
        }
        else {
            cout << v[i] << ' ';
        }
    }
}