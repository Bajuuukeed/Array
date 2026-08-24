#include <iostream>
#include <fstream>
//Se dau n numere întregi. Determinaţi câte dintre numerele date apar o singură dată.
using namespace std;
string opel = "unice1";
ifstream in(opel + ".in");
ofstream out(opel + ".out");
int fr[10000];
int main()
{
    int n;
    in >> n;
    int v[10000];
    int max = 0;
    int min = 99999999;
    for (int i = 1; i <= n; i++) {
        in >> v[i];
    }
    int ct = 0;
    for (int i = 1; i <= n; i++) {
        int ct1 = 0;
        for (int z = 1; z <= n; z++) {
            if (v[i] == v[z]) {
                ct1++;
            }
        }
        if (ct1 == 1) {
            ct++;
        }
    }
    out << ct;

}