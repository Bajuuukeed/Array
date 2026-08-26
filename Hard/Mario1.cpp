#include <bits/stdc++.h>
/*Instalatorul Mario a plecat în căutarea prințesei Peach. Până a ajunge la Castelul lui Bowser, acolo unde era ținută prizonieră prințesa, Mario a adunat N monede magice. Fiecare monedă, numerotată de la 1 la N are o o anumită valoare, moneda i având valoarea mi (1 ≤ i ≤ N). Ajuns la Castel, Mario l-a întâlnit pe Bowser care era mândrul posesor a unei colecții impresionante de monede, numerotate de la 1 la M, moneda i având o valoare bi (1 ≤ i ≤ M). În confruntarea finală, Bowser îi oferă lui Mario șansa de a o salva pe Peach doar dacă reușește să facă schimburile necesare între monedele lor, astfel încât cele mai mici N monedele să fie în posesia lui Mario și cele mai mari M valori să fie în posesia lui Bowser. Scrieți un program care să îi permită lui Mario să o salveze pe Peach.*/
using namespace std;
ifstream in("mario.in");
ofstream out("mario.out");
struct Monede{
    int val;
    int index;
};
queue<pair<int,int>> perechirez;
Monede Mario[1001];
Monede Bowser[1001];
inline bool sortare( Monede A , Monede B ){
    return A.val > B.val;
}
int main() {
    int n,m;
    in >> n;
    for (int i =1 ; i<= n ; i++) {
        in >> Mario[i].val;
        Mario[i].index = i;
    }
    in >> m;
    for (int i =1; i<= m ; i++) {
        in >> Bowser[i].val;
        Bowser[i].index = i;
    }
    sort(Mario+1,Mario+n+1,sortare);
    sort(Bowser+1,Bowser+m+1,sortare);
    int init1 =1;
    int ct =0;
    while (Mario[init1].val > Bowser[m].val && init1 <= n && m>=1) {
        perechirez.push(make_pair(Mario[init1].index,Bowser[m].index));
        init1++;
        m--;
        ct++;
    }
    out << ct << endl;
    while (!perechirez.empty()) {
        out << perechirez.front().first << ' ' << perechirez.front().second << endl;
        perechirez.pop();
    }
}