#include <iostream>
#include <fstream>
//Determinați toate permutările circulare spre stânga ale unui vector dat.
using namespace std;
int main()
{
    int n;
    cin >> n;
    int v[20];
    int ct = 0;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        ct++;
    }
    for (int i = 1; i <= n; i++) {
        cout << v[i] << ' ';
    }
    cout << endl;
    while (ct-1 != 0) {
        v[n + 1] = v[1];
        for (int i = 1; i <= n; i++) {
            v[i] = v[i + 1];
        }
        for (int i = 1; i <= n; i++) {
            cout << v[i] << ' ';
        }
        cout << endl;
        ct--;
    }
    


}
