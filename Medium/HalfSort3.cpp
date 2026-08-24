#include<bits/stdc++.h>
/*Se dă un vector cu n elemente numere întregi.
Să se ordoneze crescător subșirul format din elementele pare din vector și descrescător subșirul format din elementele impare.*/
using namespace std;
int a[1001],n;
ifstream fin("halfsort3.in");
ofstream fout("halfsort3.out");
int main()
{
    fin>>n;
    for(int i=1;i<=n;i++)
        fin>>a[i];
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
            if((a[i]>a[j]&&a[i]%2==0&&a[j]%2==0)||(a[i]<a[j]&&a[i]%2!=0&&a[j]%2!=0))
                swap(a[i], a[j]);
    for(int i=1;i<=n;i++)
        fout<<a[i]<<" ";
}