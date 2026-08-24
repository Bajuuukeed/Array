#include <iostream>
#include <fstream>
//Se citește un șir cu n numere întregi. Să se rearanjeze elementele șirului astfel ca numerele negative să fie ordonate descrescător. apoi să urmeze elementele nule, urmate de numerele pozitive ordonate descrescător.
using namespace std;
ifstream in("crb.in");
ofstream out("crb.out");
int main()
{
    int n;
    cin >> n;
    int v[1000];
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j <= n; j++)
            if (v[i] > v[j]) {
                swap(v[i], v[j]);
            }
    }
    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if ((v[i] < 0 && v[j] < 0) || (v[i] > 0 && v[j] > 0)) {
                if ((v[i] < 0 && v[j] < 0 && v[i] < v[j])||(v[i] > 0 && v[j] > 0 && v[i] < v[j])) {
                    swap(v[i], v[j]);
                }
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << v[i] << ' ';
    }


}