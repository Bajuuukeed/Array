#include <iostream>
//Se dă un vector cu n numere naturale. Să se determine câte dintre perechile de elemente din vector sunt prime între ele.
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ct = 0;
    int v[200];
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    for (int i = 1; i <= n; i++) {
        int m = v[i];
        for (int z = 1; z <= n; z++) {
            int l = v[z];
            while (v[i] != v[z]) {
                if (v[i] > v[z]) {
                    v[i] = v[i] - v[z];
                }
                else {
                    v[z] = v[z] - v[i];
                }
            }
            if (v[z] == 1) {
                ct++;
            }
            v[i] = m;
            v[z] = l;
        }
    }
    cout << ct/2;
}