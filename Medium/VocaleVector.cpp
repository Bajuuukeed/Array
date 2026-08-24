#include <iostream>
#include <fstream>
#include <cstring>
#include <string.h>
//Se citesc de la tastatura n elemente ale unui vector alcatuit exclusiv din litere mici. Rearanjati vectorul astfel incat vocalele sa fie plasate pe primele pozitii. Consoanele (si vocalele) isi vor pastra ordinea initiala, de la stanga la dreapta.
using namespace std;
int main()
{
    char vocale[6] = "aeiou";
    int n;
    cin >> n;
    char x[4001];
    for (int i = 1; i <= n; i++) {
        cin >> x[i];
    }
    for (int i = 1; i <= n; i++) {
        if (strchr(vocale, x[i]) != NULL) {
            cout << x[i] << ' ';
        }
    }
    for (int i = 1; i <= n; i++) {
        if (strchr(vocale, x[i]) == NULL) {
            cout << x[i] << ' ';
        }
    }
}