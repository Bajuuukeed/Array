#include <iostream>
#include <algorithm>
#include <map>
#include <fstream>
/*n timpul acţiunii “Furtuna în deşert” din cauza unei furtuni de nisip, n soldaţi s-au rătăcit de plutoanele lor. După trecerea furtunii se pune problema regrupării acestora pe plutoane. Pentru aceasta se folosesc plăcuţele de identificare pe care soldaţii le poartă la gât. Pe aceste plăcuţe sunt scrise numere care pot identifica fiecare soldat şi plutonul din care acesta face parte. Astfel, soldaţii din acelaşi pluton au numărul de identificare format din aceleaşi cifre, dispuse în altă ordine şi numerele de identificare sunt unice. De exemplu, numerele de identificare 78003433, 83043073, 33347008 indică faptul ca cei trei soldaţi care le poartă fac parte din acelaşi pluton.

Fiind date cele n numere de pe plăcuţele de identificare, să se regrupeze cei n soldaţi pe plutoane, indicându-se numărul de plutoane găsite (un pluton refăcut trebuie să aibă minimum un soldat), numărul de soldaţi din cel mai numeros pluton, numărul de plutoane care au acest număr maxim de soldaţi precum şi componenţa unui astfel de pluton (cu număr maxim de soldaţi regrupaţi).*/
using namespace std;
ifstream in("pluton.in");
ofstream out("pluton.out");
int v[4001];
map<int,int> fr;
int xl[4001];
int b[4001];
int max1;
int main()
{
    int n;
    in >> n;
    for (int i = 1; i <= n; i++) {
        in >> v[i];
        int x[11];
        int ct = 0;
        int z = v[i];
        while (z) {
            x[++ct] = z % 10;
            z /= 10;
        }
        int nrnou = 0;
        sort(x+1,x + ct + 1);
        int p = 1;
        for (int i = 1; i <=ct; i++) {
            nrnou = nrnou + x[i] * p;
            p *= 10;
        }
        xl[i] = nrnou;
        fr[nrnou]++;
        if (fr[nrnou] > max1) {
            max1 = fr[nrnou];
        }
    }
    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (xl[i] < xl[j]) {
                swap(xl[i], xl[j]);
                swap(v[i], v[j]);
            }
        }
    }
    int numplut = 0;
    int cntnrplut = 0;
    int cntplutvect = 0;
    int vectplut[4001] = { 0 };
    for (int i = 1; i <= n; i++) {
        int j = i;
        numplut++;
        if (fr[xl[i]] == max1){
            cntnrplut++;
            cntplutvect = 0;
            while (xl[i] == xl[j]) {
                vectplut[++cntplutvect] = v[j];
                j++;
            }
            j--;
            i = j;
        }
        else {
            while (xl[i] == xl[j]) {
                j++;
            }
            j--;
            i = j;
        }
    }
    out << numplut << endl << max1 << endl << cntnrplut << endl;
    sort(vectplut + 1, vectplut + cntplutvect + 1);
    reverse(vectplut + 1, vectplut + cntplutvect + 1);
    for (int i = 1; i <= cntplutvect; i++) {
        out << vectplut[i] << ' ';
    }
}