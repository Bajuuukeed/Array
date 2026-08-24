#include <iostream>
#include <fstream>
//Se dau n numere naturale distincte. Determinaţi câte triunghiuri distincte pot avea lungimile laturilor printre aceste numere.
using namespace std;
string opel = "numere2";
ifstream in(opel + ".in");
ofstream out(opel + ".out");
int main()
{
    int n;
    cin >> n;
    int v[100];
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    int ct = 0;
    for (int i = 1; i <= n; i++) {
        for (int z = i + 1; z <= n; z++) {
            for (int x = z+1; x <= n; x++) {
                if (x != z && z != i && i != x && (v[i] + v[x] > v[z] && v[z] + v[i] > v[x] && v[z] + v[x] > v[i])) {
                    ct++;
                }
            }
        }
    }
    cout << ct;
    

}
