#include <bits/stdc++.h>
/*Gigel a găsit un șir cu n numere naturale, numerotate de la 1 la n și un număr p. Neavând chef de muncă, Gigel vă cere să rezolvați următoarele cerințe:

a) Câți divizori are numărul din șir aflat pe poziția p?
b) Care sunt numerele din șir care au același număr de divizori ca cel aflat pe poziția p?*/
using namespace std;
ifstream in("divizori4.in");
ofstream out("divizori4.out");
int P[200000],np;
bool E[1000001];
void ciur(bool E[], int n)
{
    for(int i=2;i<=n;i++) E[i]=1;
    for(int i=2;i*i<=n;i++)
        if(E[i]==1)
            for(int j=i*i;j<=n;j=j+i)
                E[j]=0;
}
 
void prime(int n, int P[], int &np)
{//numerele prime pana la n
    np=0;
    for(int i=2;i<=n;i++)
        if(E[i]==1) P[++np]=i;
}
 
int nrdiv(int n)
{
    int d=1,c=1;
    while(n>1)
    {
        if(n%P[d]==0)
        {
            int p = 0;
            while(n%P[d]==0) n=n/P[d], ++p;
            c*=(p+1);
        }
        else ++d;
        if(n>1 && P[d]*P[d]>n)
        {
            return 2*c;
        }
    }
    return c;
}
 
int v[50001];
 
int main()
{
    ios::sync_with_stdio(false);
    ciur(E,1000001);
    prime(1000001,P,np);
    int n, c, p;
    in>>n>>c;
    for(int i=1;i<=n;++i)
        in>>v[i];
    in>>p;
    if(c==1) {out<<nrdiv(v[p]); return 0;}
    else{
        int nd = nrdiv(v[p]);
        sort(v+1, v+n+1);
        for(int i=n;i>0;--i)
            if(nrdiv(v[i]) == nd) out<<v[i]<<' ';
    }
    return 0;
}