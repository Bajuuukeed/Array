#include <iostream>
#include <fstream>
#include <cmath>
//Se dă un șir cu n elemente numere naturale. Să se se afișeze elementele din șir care au proprietatea că primele două cifre din scrierea zecimală formează un pătrat perfect.
using namespace std;
string opel = "elempp";
ifstream fin(opel + ".in");
ofstream fout(opel + ".out");
int main()
{
    int n;
    int v[100];
    fin >> n;
    for (int i = 1; i <= n; i++) {
        fin >> v[i];
        int x = v[i];
        while (x > 99) {
            x /= 10;
        }
        if ((int)sqrt(x) == sqrt(x)) {
            fout << v[i] << ' ';
        }
        
    }
}
