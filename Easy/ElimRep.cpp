#include <iostream>
#include <vector>
//Se citește un șir cu n elemente, numere întregi. Să se șteargă elementele care se repetă, păstrându-se doar primul de la stânga la dreapta.
using namespace std;
int main()
{
    int n;
    int v[1000];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    int ct = 0;
    for (int i = 1; i <= n; i++) {
        int ct = 0;
        for (int z = 1; z <= n; z++) {
            if (v[i] == v[z]) {
                ct++;
                if (ct > 1) {
                    v[z] = -10000;
                }
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        if (v[i] != -10000) {
            cout << v[i] << ' ';
        }
    }

}
