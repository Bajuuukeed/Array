#include <iostream>
#include <fstream>
//CRB are un șir cu n numere naturale diferite. Nu știe ce să facă cu ele și le aranjează în ordine descrescătoare. Apoi observă că anumite numere se află pe aceeași poziție ca în șirul inițial. Ajutați pe CRB să determine câte elemente din șir respectă această regulă.
using namespace std;
ifstream in("crb.in");
ofstream out("crb.out");
int main()
{
    int n;
    in >> n;
    int v[1000];
    int a[1000];
    for (int i = 1; i <= n; i++) {
        in >> v[i];
        a[i] = v[i];
    }
    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (v[i] < v[j]) {
                swap(v[i], v[j]);
            }
        }
    }
    int ct = 0;
    for (int i = 1; i <= n; i++) {
        if (v[i] == a[i]) {
            ct++;
        }
    }
    out << ct;
    
}