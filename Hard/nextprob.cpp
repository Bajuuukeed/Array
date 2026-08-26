#include <bits/stdc++.h>
using namespace std;
int etichete[11];
int ctetichete;
struct VectorNum{
    int nr;
    int nr0 = 0;
    int nr1 = 0;
    int nr2 = 0;
    int nr3 = 0;
    int nr4 = 0;
    int nr5 = 0;
    int nr6 = 0 ;
    int nr7 = 0;
    int nr8= 0;
    int nr9= 0;
}v[100001];
void puneluc(VectorNum vl) {
    VectorNum c = vl;
    while (c.nr) {
        if ( c.nr % 10 == 0) {
            c.nr0++;
        }
        if ( c.nr % 10 == 1) {
            c.nr1++;
        }
        if ( c.nr % 10 == 2) {
            c.nr2++;
        }
        if ( c.nr % 10 == 3) {
            c.nr3++;
        }
        if ( c.nr % 10 == 4) {
            c.nr4++;
        }
        if ( c.nr % 10 == 5) {
            c.nr5++;
        }
        if ( c.nr % 10 == 6) {
            c.nr6++;
        }
        if ( c.nr % 10 == 7) {
            c.nr7++;
        }
        if ( c.nr % 10 == 8) {
            c.nr8++;
        }
        if ( c.nr % 10 == 9) {
            c.nr9++;
        }
        c.nr/=10;
    }
}

int main() {
    int c,n,k;
    cin >> c >> n >> k;
    for (int i =1; i<= n ; i++) {
        cin >> v[i].nr;
        puneluc(v[i]);
    }
    cout << v[1].nr0;
    int i = 0;
    bool ok = false;
    while (i<n) {
        int ct =0;
        if ( v[i].nr0 != 0 && v[i+1].nr0!=0) {
            ct+=min(v[i].nr0,v[i+1].nr0);
        }
        if ( v[i].nr1 != 0 && v[i+1].nr1!=0) {
            ct+=min(v[i].nr1,v[i+1].nr1);
        }
        if ( v[i].nr2 != 0 && v[i+1].nr2!=0) {
            ct+=min(v[i].nr2,v[i+1].nr2);
        }
        if ( v[i].nr3 != 0 && v[i+1].nr3!=0) {
            ct+=min(v[i].nr3,v[i+1].nr3);
        }
        if ( v[i].nr4 != 0 && v[i+1].nr4!=0) {
            ct+=min(v[i].nr4,v[i+1].nr4);
        }
        if ( v[i].nr5 != 0 && v[i+1].nr5!=0) {
            ct+=min(v[i].nr5,v[i+1].nr5);
        }
        if ( v[i].nr6 != 0 && v[i+1].nr6!=0) {
            ct+=min(v[i].nr6,v[i+1].nr6);
        }
        if ( v[i].nr7 != 0 && v[i+1].nr7!=0) {
            ct+=min(v[i].nr7,v[i+1].nr7);
        }
        if ( v[i].nr8 != 0 && v[i+1].nr8!=0) {
            ct+=min(v[i].nr8,v[i+1].nr8);
        }
        if ( v[i].nr9 != 0 && v[i+1].nr9!=0) {
            ct+=min(v[i].nr9,v[i+1].nr9);
        }
        if ( ct >= 3) {
            ok = true;
            int c= v[i].nr;
            while (c >= 9999) {
                c/=10;
            }
            v[i+1].nr = c * 10000 + (v[i+1].nr % 1000);
            puneluc(v[i+1]);
        }
        else {
            if ( ok == true) etichete[++ctetichete] = v[i].nr;
        }
        i++;
    }
}