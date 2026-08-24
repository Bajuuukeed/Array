#include <iostream>
#include <fstream>
/*Se dă un vector cu n elemente numere întregi nenule.
Să se ordoneze crescător subșirul format din elementele negative din vector și descrescător subșirul format din elementele pozitive.*/
using namespace std;
ifstream in("halfsort4.in");
ofstream out("halfsort4.out");
int main()
{

    int n;
    in >> n;
    int v[1001];
    for (int i = 1; i <= n; i++) {
        in >> v[i];
    }
    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (v[i] < 0 && v[j]<0 && v[i] > v[j]) {
                swap(v[i], v[j]);
            }
            if (v[i] >=0 && v[j]>=0 && v[i] < v[j]) {
                swap(v[i], v[j]);
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        out << v[i] << ' ';
    }
}