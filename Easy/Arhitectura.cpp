#include <iostream>
//Se citesc n numere naturale reprezentând înălțimile a n clădiri. Cerința problemei este de a realiza un proiect de arhitectură în care clădirile sunt ordonate descrescător după înălțimea lor.
using namespace std;
int main()
{
    int n;
    cin >> n;
    int v[1001];
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (v[i] > v[j]) {
                swap(v[i], v[j]);
            }
        }
    }
    for (int i = n; i >= 1; i--) {
        cout << v[i] << ' ';
    }

}

