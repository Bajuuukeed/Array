#include <iostream>
/*Se consideră un șir a1, a2, …, an de numere naturale.

Să se afișeze elementele șirului de la dreapta la stânga.
Să se calculeze suma valorilor pare din șir.
Să se determine suma valorilor aflate pe poziții pare în șir.
Să se determine numărul numerelor din șir care sunt divizibile cu 10.
Să se determine suma numerelor divizibile cu 3 și aflate pe poziții impare.*/
using namespace std;

int main()
{
    int n;
    cin >> n;
    int v[100];
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    for (int i = n; i > 0; i--) {
        cout << v[i] << ' ';
    }
    cout << endl;
    int sumapar = 0;
    for (int i = 1; i <= n; i++) {
        if (v[i] % 2 == 0) {
            sumapar += v[i];
        }
    }
    int sumapozitii = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sumapozitii += v[i];
        }
    }
    int ct = 0;
    for (int i = 1; i <= n; i++) {
        if (v[i] % 10 == 0) {
            ct++;
        }
    }
    int ultimul = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1 && v[i] % 3 == 0) {
            ultimul += v[i];
        }
    }
    cout << sumapar << endl;
    cout << sumapozitii << endl;
    cout << ct << endl;
    cout << ultimul;
}

