#include <iostream>
#include <cmath>
//Să se insereze pe o poziție dată într-un șir o valoare precizată.
using namespace std;
int main() {
    int n;
    cin >> n;
    int v[25];
    int l;
    cin >> l;
    int x;
    cin >> x;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    for (int i = n; i >= x; i--) {
        v[i + 1] = v[i];
    }
    v[x] = l;
    for (int i = 1; i <= n+1; i++) {
        cout << v[i] << ' ';
    }
}
