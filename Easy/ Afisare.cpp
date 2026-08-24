#include <iostream>
#include <iomanip>
#include <cmath>
//Se citește un vector cu n elemente, numere naturale. Să se afișeze elementele cu indici pari în ordinea crescătoare a indicilor, iar elementele cu indici impari în ordinea descrescătoare a indicilor.
using namespace std;
int main()
{
    int n, v[1001];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        if (i % 2 == 0) {
            cout << v[i] << " ";
        }
    }
    cout << endl;
    for (int i = n; i > 0; i--) {
        if (i % 2 != 0) {
            cout << v[i] << " ";
        }
    }
}