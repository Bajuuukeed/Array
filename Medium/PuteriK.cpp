#include <iostream>
#include <fstream>
//Se dau n numere naturale şi un număr natural k. Afişaţi în ordine crescătoare acele numere date care sunt puteri ale lui k.
using namespace std;
ifstream in("puterik.in");
ofstream out("puterik.out");
int main()
{
    int n;
    in >> n;
    int put;
    in >> put;
    int v[100];
    int a[100];
    int catesuntput = 1;
    for (int i = 1; i <= n; i++) {
        in >> v[i];
        int x = v[i];
        while (x % put == 0) {
            x /= put;
        }
        if (x == 1) {
            a[catesuntput] = v[i];
            catesuntput++;
        }
    }
    for (int i = 1; i <= catesuntput-1; i++) {
        for (int j = i + 1; j <= catesuntput - 1; j++) {
            if (a[i] > a[j]) {
                swap(a[i], a[j]);
            }
        }
    }
    for (int i = 1; i <= catesuntput-1; i++) {
        out << a[i] << ' ';
    }
}