#include <bits/stdc++.h>
/*Trei nave spațiale, fiecare transportând n extratereștri din trei galaxii diferite (Galaxia Algorithma, Nebulosa Recursiv și Calea Protocol), au ajuns la Olimpiada de Informatică din galaxia Calea Informateea. Pentru a celebra această ocazie, toți extratereștrii își doresc să facă o fotografie de grup împreună. Înălțimile extratereștrilor sunt foarte variate, de la nanometri la kilometri. Din acest motiv, pentru a se asigura că se văd toți în fotografie, extratereștrii trebuie să se așeze pe trei rânduri:

Primul rând: Extratereștrii cei mai mici de statură (în ordine descrescătoare a înălțimilor de la stânga la dreapta).
Al doilea rând: Extratereștrii cu înălțimi intermediare ordonați descrescător de la stânga la dreapta
Al treilea rând: Extratereștrii cei mai înalți ordonați descrescător de la stânga la dreapta.*/
using namespace std;
ifstream in("poza.in");
ofstream out("poza.out");
int a[100001];
int b[100001];
int c[100001];
int interm[300001];
int main()
{
    int cl , n;
    int ct = 0;
    int max1 = 0;
    int min1 =INT_MAX;
    in >> cl >> n;
    for(int i =1; i<= n ; i++){
        in >> a[i];
        max1 = max(a[i],max1);
        min1 = min(a[i],min1);
        interm[++ct] = a[i];
    }
    for(int i =1; i<= n ; i++){
        in >> b[i];
        max1 = max(b[i],max1);
        min1 = min(b[i],min1);
        interm[++ct] = b[i];
    }
    for(int i =1; i<= n ; i++){
        in >> c[i];
        max1 = max(c[i],max1);
        min1 = min(c[i],min1);
        interm[++ct] = c[i];
    }
    if ( cl == 1){
        out << max1 << ' ' << min1;
    }
    else{
        sort(interm+1,interm+ct+1);
        int i = 1;
        int ca = n;
        for(int i = n ; i>= 1; i--){
            out << interm[i] << ' ';
        }
        out << endl;
        for(int i = 2*n ; i> n ; i--){
            out << interm[i] << ' ';
        }
        out << endl;
        for(int i = 3*n ; i>2*n ; i--){
            out << interm[i] << ' ';
        }
    }

}