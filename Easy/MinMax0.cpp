#include <iostream>
#include <iomanip>
#include <cmath>
//Să se determine maximul şi minimul valorilor elementelor unui vector.
using namespace std;
int main()
{
    int n, x, max = 0;
    long long min = 1000000;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        if (x > max) {
            max = x;
        }
        if (x < min) {
            min = x;
        }
    }
    cout << min << ' ' << max;
    return 0;
}