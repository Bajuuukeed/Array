#include <iostream>
//Se da un vector cu n elemente. Sa se afișeze pe ecran elementele din vector care divid factorialul numărului de elemente n.
using namespace std;
int main()
{
    int n;
    cin >> n;
    int v[12];
    long long factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    for (int i = 1; i <= n; i++) {
        if (factorial % v[i] == 0) {
            cout << v[i] << ' ';
        }
    }
    
}