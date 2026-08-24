#include <iostream>
#include <fstream>
/*
* În baza de date a unui magazin online există n produse. Fiecare are un cod numeric, alcătuit din cel mult nouă cifre, cu următoarea semnificație:

prima cifră reprezintă categoria produsului;
a doua cifră reprezintă starea produsului – pară pentru produsele existente pe stoc și impară pentru cele cu stoc epuizat;
restul cifrelor din cod reprezintă identificatorul produsului.
Se dau cele n coduri ale produselor din baza de date.

1) Determinați câte produse există pe stoc și câte au stoc epuizat.
2) Pentru fiecare categorie, determinați lista produselor, în ordinea crescătoare a codurilor numerice.
 */
using namespace std;
ifstream in("produse.in");
ofstream out("produse.out");
int main()
{
    int c;
    in >> c;
    if (c == 1) {
        int n;
        in >> n;
        int v[1000];
        for (int i = 1; i <= n; i++) {
            in >> v[i];
        }
        int ctexistente = 0;
        int ctinexistente = 0;
        for (int i = 1; i <= n; i++) {
            int x = v[i];
            while (x > 99) {
                x /= 10;
            }
            int uc = x % 10;
            if (uc % 2 == 0) {
                ctexistente++;
            }
            else {
                ctinexistente++;
            }
        }
        out << ctexistente << ' ' << ctinexistente;
    }
    else {
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
        int z = 0;
        int primaoara = 0;
        for (int i = 1; i <= n; i++) {
            if (primcif[i] == z) {
                out << v[i] << ' ';
            }
            else {
                if (z != 0) {
                    out << endl;
                }
                z = primcif[i];
                out << z << ' ';
                out << v[i] << ' ';
            }
        }
    }
}