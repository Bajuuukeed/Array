#include <iostream>
#include <cmath>
#include <iomanip>
//Se dau n numere întregi. Să se insereze între oricare două numere de aceeași paritate media lor aritmetică.
using namespace std;
int main()
{
    double n;
    int v[100];
    cin >> n;
    int mediearitm = 0;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        int c = v[i];
        int m = v[i + 1];
        mediearitm = (c + m) / 2;
        v[i] = c;
        v[i + 1] = m;
    }
    for (int i = 1; i <= n; i++) {
        if ((v[i] + v[i + 1]) % 2 == 0 && i < n) {
            cout << v[i] << ' ' << (v[i] + v[i + 1]) / 2 << ' ';
        }
        else {
            cout << v[i] << ' ';
        }
        if (i == n) {
            break;
        }
    }
    return 0;

}