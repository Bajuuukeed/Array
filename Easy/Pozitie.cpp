#include <iostream>
#include <fstream>
//Se dă un şir cu n numere naturale distincte două câte două. Să se determine poziţia pe care s-ar afla primul element al şirului în şirul sortat.
using namespace std;
string opel = "pozitie";
ifstream in(opel + ".in");
ofstream out(opel + ".out");
int fr[100000];
int main()
{
    int n;
    in >> n;
    long long max = 0;
    int v[10000];
    long long x = 0;
    for (int i = 1; i <= n; i++) {
        in >> v[i];
        x = v[1];
        if (v[i] > max) {
            max = v[i];
        }
        fr[v[i]]++;
    }
    int ct = 0;
    while (max+1!= 0) {
        if (max == x) {
            break;
        }
        if (fr[max] > 0) {
            ct++;
        }
        max--;
    }
    out << n-ct;
}
