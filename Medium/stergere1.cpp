#include <iostream>
#include <iomanip>
#include <cmath>
//Să se șteargă dintr-un vector toate elementele pare.
using namespace std;
int a[1500], n;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        if (a[i] % 2 == 0) {
            for (int j = i + 1; j <= n; j++) {
                a[j - 1] = a[j];
            }
            n--;
            i--;
        }
    }
    
    for (int i = 1; i <= n; i++) {
        cout << a[i] << ' ';
    }
}