#include <fstream>
#include <vector>
using namespace std;
/*Se dă un șir a1, a2, …, an de numere naturale. Trebuie să răspundeți la două cerințe:
1) Să se verifice dacă șirul este ordonat crescător sau nu.
2) Să se verifice dacă prin eliminarea unui singur element, șirul rămas este ordonat crescător sau nu.*/
ifstream in("cresc.in");
ofstream out("cresc.out");
int main() {
    int t, n;
    in >> t >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        in >> v[i];
    }
    if (t == 1) {
        bool ok = true;
        for (int i = 1; i < n; i++) {
            if (v[i] < v[i - 1]) {
                ok = false;
                break;
            }
        }
        out << (ok ? "DA" : "NU") << endl;
    } else {
        int index = -1;
        int count = 0;
        for (int i = 0; i < n - 1; i++) {
            if (v[i] > v[i + 1]) {
                count++;
                index = i;
            }
        }
        if (count == 0) {
            out << "DA" << endl;
        } else if (count > 1) {
            out << "NU" << endl;
        } else {
            bool ok = false;
            if (index == 0 || v[index - 1] <= v[index + 1]) {
                ok = true;
            }
            if (index + 1 == n - 1 || v[index] <= v[index + 2]) {
                ok = true;
            }

            out << (ok ? "DA" : "NU") << endl;
        }
    }
    return 0;
}