#include <iostream>
#include <fstream>
/*Se dă un șir format din n numere naturale. Se mai dă o valoare x și se garantează că șirul începe și se termină cu valoarea x. Transformați șirul astfel:

Elementele cu valoarea x rămân pe pozițiile lor;
Secvențele de elemente diferile de x aflate între două poziții cu valoarea x se ordonează crescător (între aceleași două elemente cu valoarea x se vor afla aceleași elemente ca la început dar în ordine crescătoare).*/
using namespace std;
ifstream in("alfa.in");
ofstream out("alfa.out");
int main()
{
    int n, m;
    in >> n >> m;
    int v[1000];
    int catesunt[1000];
    int ct = 1;
    for (int i = 1; i <= n; i++) {
        in >> v[i];
        if (v[i] == m) {
            catesunt[ct] = i;
            ct++;
        }
    }
    for (int i = 1; i <= ct-1; i++) {
        for (int z = catesunt[i]+1; z <= catesunt[i+1]-1;z++) {
            for (int w = z + 1; w <= catesunt[i+1]-1; w++) {
                if (v[z] > v[w]) {
                    swap(v[z], v[w]);
                }
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        out << v[i] << ' ';
    }
}