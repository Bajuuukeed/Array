#include <iostream>
#include <fstream>
#include <cmath>
//Se citește de la tastură un număr natural n, apoi n numere naturale. Să se afişeze cel mai mic număr care poate fi scris folosind prima cifră a numerelor citite.
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
        int ct = 0;
        while (x != 0) {
            ct++;
            x /= 10;
        }
        a[i] = v[i]/ pow(10, ct - 1);
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (a[i] > a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << a[i];
    }
}