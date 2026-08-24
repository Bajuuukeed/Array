#include <iostream>
#include <fstream>
#include <cmath>
//Se citește de la tastură un număr natural n, apoi n numere naturale. Să se afişeze cel mai mic număr care poate fi scris folosind cifra minimă a fiecărui număr citit.
using namespace std;
int main()
{
    int n;
    cin >> n;
    int v[1000];
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    int a[1000];
    for (int i = 1; i <= n; i++) {
        int x = v[i];
        int minim = 9;
        while (x != 0) {
            int uc = x % 10;
            if (uc < minim) {
                minim = uc;
            }
            x /= 10;
        }
        a[i] = minim;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i+1; j <= n; j++) {
            if (a[i] > a[j]) {
                swap(a[i], a[j]);
            }
        }
    }
    int w = 1;
    int undee = 0;
    while (a[w] == 0) {
        w++;
    }
    if (a[1] == 0) {
        swap(a[1], a[w]);
    }
    for (int i = 1; i <= n; i++) {
        cout << a[i];
    }
}