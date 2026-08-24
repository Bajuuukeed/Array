#include <iostream>
//Se citește un vector cu n elemente, numere naturale. Să se determine câte elemente ale vectorului sunt egale cu diferența dintre cea mai mare și cea mai mică valoare din vector.
using namespace std;
int v[1000],n;
int main()
{
    int maxx = 0;
    int ct =0;
    long long minn = 999999999;
    cin >>n;
    for(int i = 1; i<= n ;i++){
        cin >> v[i];
        if ( v[i] > maxx){
            maxx = v[i];
        }
        if ( v[i] < minn){
            minn = v[i];
        }
    }
    for(int i = 1 ; i<= n ; i++){
        if ( v[i] == maxx - minn){
            ct++;
        }
    }
    cout << ct;



    return 0;
}