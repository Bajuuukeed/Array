#include <iostream>
#include <fstream>
//Să se scrie un program care ordonează elementele unui vector crescător după suma cifrelor.
using namespace std;
ifstream in("sortcif.in");
ofstream out("sortcif.out");
int main()
{
    int n;
    in >> n;
    int v[100];
    int suma[100];
    for (int i = 1; i <= n; i++) {
        in >> v[i];
    }
    for (int i = 1; i <= n; i++) {
        int x = v[i];
        int sumaplm = 0;
        while (x != 0) {
            int uc = x % 10;
            sumaplm += uc;
            x /= 10;
        }
        suma[i] = sumaplm;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (suma[i] > suma[j]) {
                swap(suma[i], suma[j]);
                swap(v[i], v[j]);
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        out << v[i] << ' ';
    }
}