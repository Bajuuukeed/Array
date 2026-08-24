#include <iostream>
#include <iomanip>
#include <cmath>
//Să se șteargă dintr-un șir elementul aflat pe o poziție dată.
using namespace std;
int a[1500], n,p;
int main() {
    cin >> n >> p;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = p + 1; i <= n; i++) {
        a[i - 1] = a[i];
    }
    n--;
    for (int i = 1; i <= n; i++) {
        cout << a[i] << ' ';
    }
}