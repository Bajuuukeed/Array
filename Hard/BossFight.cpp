#include <bits/stdc++.h>
/*Gimi a găsit un nou joc, faimos pentru dificultatea sa ridicată. Jocul este alcătuit din N camere, numerotate de la 1 la N. Fiecare cameră i conține un monstru a cărui putere este un număr natural P[i]. Gimi trece, în ordine, prin toate camerele. În fiecare cameră el poate alege să se lupte cu monstrul sau nu. Gimi se întreabă în câte moduri poate să aleagă 3 monștri cu care să se lupte. Două mulțimi de trei monștri se consideră diferite dacă există cel puțin un monstru în prima mulțime care nu aparține celei de-a doua mulțimi. Formal, se cere numărul de tripleți i < j < k pentru care P[i] < P[j] < P[k] și P[i] + P[j] + P[k] ≤ S.*/
using namespace std;
ifstream in("bossfight.in");
ofstream out("bossfight.out");
struct p{
    int val;
    int index;
}v[10001];
int ve[10001];
int A[10001];
int B[10001];
long long total;
inline bool sortare(p a, p b) {
    return a.val < b.val || ( a.val == b.val && a.index < b.index);
}
int main() {
    int n,m;
    in >> n >> m;
    for (int i =1; i<= n ; i++) {
        in >> ve[i];
        v[i].val = ve[i];
        v[i].index = i;
    }
    sort(v+1,v+n+1,sortare);
    for (int i =1; i<= n ; i++) {
        int a = ve[i];
        int sA =0;
        int sB =0;
        for (int j =1; j<= n ; j++) {
            if ( v[j].index < i && v[j].val < a) {
                A[++sA] = v[j].val;
            }
            else if (v[j].index > i && v[j].val > a ) {
                B[++sB] = v[j].val;
            }
        }
        int newtarg = m-a;
        for (int k =1; k<= sA ; k++) {
            while (sB >= 0 && (long long) A[k] + B[sB] > newtarg) {
                sB--;
            }
            if ( sB < 0 )break;
            total+=sB;
        }
    }
    out << total;
}