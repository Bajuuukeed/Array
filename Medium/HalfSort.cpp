#include <iostream>
#include <fstream>
//Să se scrie un program care ordonează crescător elementele din prima jumătate a unui vector și descrescător elementele din a doua jumătate.
using namespace std;
ifstream in("halfsort.in");
ofstream out("halfsort.out");
int main()
{
    int n;
    in >> n;
    int v[100];
    for (int i = 1; i <= n; i++) {
        in >> v[i];
    }
    for (int i = 1; i <= n/2; i++) {
        for (int j = i + 1; j <= n/2; j++) {
            if (v[i] > v[j]) {
                swap(v[i], v[j]);
            }
        }
    }
    for (int i = 1; i <= n/2; i++) {
        out << v[i] << ' ';
    }
    for (int i = n/2+1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (v[i] > v[j]) {
                swap(v[i], v[j]);
            }
        }
    }
    for (int i = n; i > n/2; i--) {
        out << v[i] << ' ';
    }
}