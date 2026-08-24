#include <iostream>
#include <fstream>
#include <cmath>
//Să se ordoneze crescător elementele dintr-un şir dat cuprinse între elementul de valoare maximă şi cel de valoare minimă.
using namespace std;
int main()
{
    int n;
    cin >> n;
    int imax = 0;
    int imin = 0;
    int min = 99999999;
    int max = 0;
    int v[1000];
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        if (v[i] > max) {
            max = v[i];
            imax = i;
        }
        if (v[i] < min) {
            min = v[i];
            imin = i;
        }
    }
    if (imax < imin) {
        for (int i = imax; i <= imin; i++) {
            for (int j = i + 1; j <= imin; j++) {
                if (v[i] > v[j]) {
                    swap(v[i], v[j]);
                }
            }
        }
    }
    else {
        for (int i = imin; i <= imax; i++) {
            for (int j = i + 1; j <= imax; j++) {
                if (v[i] > v[j]) {
                    swap(v[i], v[j]);
                }
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << v[i] << ' ';
    }


}