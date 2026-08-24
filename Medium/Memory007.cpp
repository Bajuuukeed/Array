#include <bits/stdc++.h>
//Agentul 007 a uitat cifrul seifului în care păstra documentele, însă ştie cum poate fi aflat. Are nişte cartonaşe pe care sunt notate n numere naturale distincte din intervalul [ a,b ]. Mai are o listă cu m numere naturale distincte care reprezintă anumite poziţii din şirul ordonat crescător al numerelor de pe cartonaşe. Însumând numerele aflate pe poziţiile din listă se determină un număr natural care reprezintă cifrul seifului. Cum Agentul 007 nu a mai programat din liceu, vă roagă pe voi să găsiţi cifrul în schimbul a 100 de … puncte.
using namespace std;
ifstream fin("memory007.in");
ofstream fout("memory007.out");
bitset<700020> v ;
long n , m , a , b , i , j , nr , x ;
long long suma , r , t ;
int main()
{
    fin >> n >> m >> a >> b ;
    for ( i=1 ; i<=n ; i++ )
    {
        fin >> x ;
        j = x-a ;
        v[j] = 1 ;
    }
    j = 0 ;
    nr = 0 ;
    suma = 0 ;
    for ( i=1 ; i<=m ; i++)
    {
        fin >> x ;
        while ( nr < x )
        {
            nr = nr + v[j] ;
            j++ ;
        }
        suma = suma + j - 1 ;
    }
    r = m ;
    t = a ;
    suma = suma + r * t ;
    fout << suma ;
    return 0;
}