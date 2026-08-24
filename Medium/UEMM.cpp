#include <iostream>
//Se dă un șir cu n elemente, numere naturale. Să se afișeze, pentru fiecare element din șir, valoarea din șir aflată după acesta și mai mare decât acesta. Dacă o asemenea valoare nu există, se va afișa -1.
using namespace std;
int main()
{
    int n;
    cin >> n;
    int v[1000];
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    int z = 0;
    for (int i = 1; i <= n; i++) {
        z = 0;
        for (int j = i + 1; j <= n; j++) {
            if (v[i] < v[j]) {
                cout << v[j] << ' ';
                z++;
                break;
            }
        }
        if ( z == 0){
            cout << "-1" << ' ';
        }


    }
}

