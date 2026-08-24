#include <iostream>
#include <fstream>
#include <cmath>
//Să se scrie un program care ordonează descrescător elementele unui vector.
using namespace std;
ifstream in("sortare.in");
ofstream out("sortare.out");
int main()
{
    int n;
    in >> n;
    int v[1000];
    for (int i = 1; i <= n; i++) {
        in >> v[i];
    }

    for (int i = 1; i <= n; i++) {
        for (int j = i+1; j <= n; j++) {
            if (v[i] > v[j]) {
                swap(v[i], v[j]);
            }
        }
    }
    for (int i = n; i >= 1; i--) {
        out << v[i] << ' ';
    }
}