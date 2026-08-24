#include <iostream>
#include <fstream>
//Să se scrie un program care ordonează elementele unui vector crescător după prima cifră.
using namespace std;
ifstream in("sortcif2.in");
ofstream out("sortcif2.out");
int main()
{

    int n;
    in >> n;
    int v[1000];
    int primcif[1000];
    for (int i = 1; i <= n; i++) {
        in >> v[i];
        int x = v[i];
        while (x > 9) {
            x /= 10;
        }
        primcif[i] = x;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (primcif[i] > primcif[j] || (primcif[i] == primcif[j] && v[i] > v[j])) {
                swap(primcif[i], primcif[j]);
                swap(v[i], v[j]);
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        out << v[i] << ' ';
    }
}