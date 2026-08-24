#include <iostream>
#include <fstream>
//Să se scrie un program care ordonează crescător elementele situate pe poziții pare într-un vector și descrescător elementele situate pe poziții impare.
using namespace std;
ifstream in("halfsort2.in");
ofstream out("halfsort2.out");
int main()
{

    int n;
    in >> n;
    int v[100];
    for (int i = 1; i <= n; i++) {
        in >> v[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (i % 2 == 0 && j % 2 == 0 && v[i] > v[j]) {
                swap(v[i], v[j]);
            }
            if (i % 2 == 1 && j % 2 == 1 && v[i] < v[j]) {
                swap(v[i], v[j]);
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        out << v[i] << ' ';
    }
}