#include <iostream>
#include <string.h>
//Se citește un vector cu n elemente, numere naturale. Să se afișeze elementele din vector care sunt multipli ai ultimului element.
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
        if (v[i] % v[n] == 0 && v[i] >= v[n]) {
            cout << v[i] << ' ';
        }
    }
}