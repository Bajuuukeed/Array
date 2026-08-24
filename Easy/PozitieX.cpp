#include <iostream>
#include <fstream>
//Se dă un număr natural X şi un şir cu n numere naturale distincte două câte două. Să se determine poziţia pe care s-ar afla numărul X în şirul sortat.
using namespace std;
string opel = "pozitiex";
ifstream in(opel + ".in");
ofstream out(opel + ".out");
int fr[100000];
int main()
{
    int p;
    in >> p;
    int n;
    in >> n;
    int max = 0;
    int v[10000];
    int x = 0;
    int existap = 0;
    for (int i = 1; i <= n; i++) {
        in >> v[i];
        if (v[i] == p) {
            existap++;
        }
        if (v[i] > max) {
            max = v[i];
        }
        fr[v[i]]++;
    }
    int ct = 0;
    while (max+1!= 0) {
        if (max == p) {
            break;
        }
        if (fr[max] > 0) {
            ct++;
        }
        
        max--;
    }
    if (existap == 0) {
        out << "NU EXISTA";
    }
    else {
        out << n - ct;
    }
}