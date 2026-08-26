#include <bits/stdc++.h>
/*Maria a primit cadou de ziua ei o cutie cu piese de puzzle, etichetate cu numere naturale. Pentru a-l rezolva trebuie să lipească între ele, în ordinea în care le extrage din cutie, cât mai multe piese, formând astfel grupuri de piese. Cunoscând cele N numere naturale care se găsesc pe etichetele pieselor de joc, în ordinea în care aceste se extrag din cutie, să se determine:
1. Numărul de grupuri pe care le obține Maria după ce rezolvă jocul de puzzle;
2. Cele K numere înscrise pe etichetele grupurilor alese de Maria.*/
using namespace std;
ifstream in("puzzle.in");
ofstream out("puzzle.out");
struct Grup {
    long long eticheta;
    int cifre_distincte;
};
bool pot_lipi(long long a, long long b) {
    int frA[10] = {0}, frB[10] = {0};
    while (a > 0) { frA[a % 10]++; a /= 10; }
    while (b > 0) { frB[b % 10]++; b /= 10; }
    
    int comune = 0;
    for (int i = 0; i < 10; i++) {
        comune += min(frA[i], frB[i]);
    }
    return comune >= 3;
}
long long lipeste(long long a, long long b) {
    string strA = to_string(a);
    string strB = to_string(b);

    string prima_parte = (strA.length() <= 4) ? strA : strA.substr(0, 4);
    string a_dua_parte = (strB.length() <= 4) ? strB : strB.substr(strB.length() - 4);

    return stoll(prima_parte + a_dua_parte);
}
int numara_cifre_distincte(long long n) {
    bool apare[10] = {false};
    int dist = 0;
    if (n == 0) return 1;
    while (n > 0) {
        if (!apare[n % 10]) {
            apare[n % 10] = true;
            dist++;
        }
        n /= 10;
    }
    return dist;
}
bool comp(const Grup& a, const Grup& b) {
    if (a.cifre_distincte != b.cifre_distincte) {
        return a.cifre_distincte > b.cifre_distincte;
    }
    return a.eticheta < b.eticheta;
}

int main() {
    int C, N, K;
    in >> C >> N >> K;
    vector<long long> piese(N);
    for (int i = 0; i < N; i++) {
        in >> piese[i];
    }
    vector<Grup> grupuri;
    long long grup_curent = piese[0];
    for (int i = 1; i < N; i++) {
        if (pot_lipi(grup_curent, piese[i])) {
            grup_curent = lipeste(grup_curent, piese[i]);
        } else {
            grupuri.push_back({grup_curent, numara_cifre_distincte(grup_curent)});
            grup_curent = piese[i];
        }
    }
    grupuri.push_back({grup_curent, numara_cifre_distincte(grup_curent)});
    if (C == 1) {
        out << grupuri.size() << "\n";
    } else {
        sort(grupuri.begin(), grupuri.end(), comp);
        for (int i = 0; i < K; i++) {
            out << grupuri[i].eticheta << (i == K - 1 ? "" : " ");
        }
        out << "\n";
    }

    return 0;
}