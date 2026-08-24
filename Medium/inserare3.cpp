#include <iostream>
#include <string.h>
#include <iostream>
//Se dă un vector cu n elemente numere naturale. Să se transforme vectorul, duplicând fiecare apariție a valorii minime.
using namespace std;
int main()
{
    int n;
    cin >> n;
    int v[1000];
    int min = 999999;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    for (int i = 1; i <= n; i++) {
        if (v[i] < min) {
            min = v[i];
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << v[i] << ' ';
        if (v[i] == min) {
            cout << v[i] << ' ';
        }
    }
}
