#include <bits/stdc++.h>
/*Mihăiță s-a hotărât să își construiască un gard perfect cu ajutorul lui Dorel – un constructor renumit.
Un gard perfect trebuie să respecte următoarele cerințe:
1. Gardul să fie format din N scânduri de înălțimi nu neapărat egale;
2. Scândurile pot fi așezate în orice ordine;
3. Există un număr egal de scânduri pentru fiecare înălțime;
Mihăiță acceptă un gard ca fiind perfect dacă respectă condițiile de mai sus înainte sau după eliminarea unei singure scânduri. Ajutați-l pe Mihăiță să verifice perfecțiunea celor T garduri propuse de Dorel.*/
using namespace std;
ifstream in("gard.in");
ofstream out("gard.out");
int v[1000004];
int main() {

    int t;
    in >> t;
    for (int i = 1; i <= t; i++) {
        int n;
        in >> n;
        for (int j = 1; j <= n; j++) {
            in >> v[j];
        }
        sort(v + 1, v + n + 1);
        vector<int> inaltimi;
        int p = 1;
        for (int j = 2; j <= n; j++) {
            if (v[j] == v[j - 1]) {
                p++;
            } else {
                inaltimi.push_back(p);
                p = 1; 
            }
        }
        inaltimi.push_back(p); 
        map<int, int> count_freqs;
        for (int x : inaltimi) {
            count_freqs[x]++;
        }
        bool ok = false;
        if (count_freqs.size() == 1) {
            ok = true;
        } 
        else if (count_freqs.size() == 2) {
            auto it = count_freqs.begin();
            int f1 = it->first;      
            int c1 = it->second;     
            it++;
            int f2 = it->first;    
            int c2 = it->second;    
            if (f2 - f1 == 1 && c2 == 1) {
                ok = true;
            }
            else if (f1 == 1 && c1 == 1) {
                ok = true;
            }
        }
        if (ok) out << 1 << "\n";
        else out << 0 << "\n";
    }
    return 0;
}