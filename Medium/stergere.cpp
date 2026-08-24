#include <iostream>
//Să se șteargă dintr-un vector toate elementele care sunt numere prime.
using namespace std;
int main()
{
    int n;
    cin >> n;
    int v[1000];
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    for (int i = 1; i <= n; i++) {
        int ct = 0;
        for (int d = 1; d*d<= v[i]; d++) {
            if (v[i] % d == 0) {
                ct += 2;
            }
            if (d * d == v[i]) {
                ct--;
            }
        }
        if (ct != 2) {
            cout << v[i] << ' ';
        }
    }
    

}