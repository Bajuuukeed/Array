#include <iostream>
#include <fstream>
//Se dă un şir cu n elemente, numere naturale nenule cu cel mult 4 cifre fiecare. Afişaţi, în ordine crescătoare, valorile pare din şir. Dacă şirul nu conţine nici o valoare pară, se va afişa mesajul nu exista.
using namespace std;
ifstream in("paresort.in");
ofstream out("paresort.out");
int main()
{
    int n;
    in >> n;
    int v[1000];
    int a[1000];
    int existapar = 0;
    for (int i = 1; i <= n; i++) {
        in >> v[i];
        if (v[i] % 2 == 0) {
            existapar++;
            a[existapar] = v[i];
        }
    }
    if (existapar == 0) {
        out << "nu exista";
    }
    else {
        out << existapar << endl;
        for (int i = 1; i <= existapar; i++) {
            for (int j = i + 1; j <= existapar; j++) {
                if (a[i] > a[j]) {
                    swap(a[i], a[j]);
                }
            }
        }
        for (int i = 1; i <= existapar; i++) {
            out << a[i] << ' ';
        }

    }
    in.close();
    out.close();
}