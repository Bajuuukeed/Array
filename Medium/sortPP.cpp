#include <iostream>
#include <fstream>
#include <cmath>
//Să se ordoneze crescător elementele pătrat perfect ale unui şir dat, fără a afecta elementele care nu sunt pătrat perfect.
using namespace std;
int main()
{
    int n;
    cin >> n;
    int v[1000];
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (sqrt(v[i]) == (int)sqrt(v[i]) && sqrt(v[j]) == (int)sqrt(v[j])) {
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