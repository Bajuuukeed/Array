#include <iostream>
#include <fstream>
//Se dă un şir cu n numere naturale. Să se afişeze suma primilor n termeni din şir, apoi suma primilor n-1 termeni din şir, şi aşa mai departe.
using namespace std;
string opel = "sume";
ifstream in(opel + ".in");
ofstream out(opel + ".out");

int main()
{
    int n;
    int v[101];
    in >> n;
    for (int i = 1; i <= n; i++) {
        in >> v[i];
    }
    int suma = 0;
    while (n != 0) {
        int z = n;
        int suma = 0;
        for (int i = n; i >= 1; i--) {
            suma += v[i];
        }
        out << suma << endl;
        n--;
    }
   
}