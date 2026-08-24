#include<bits/stdc++.h>
//Se dă numărul natural n. Afișați al n-lea număr par.
using namespace std;
int v[1001];
int main()
{
    unsigned long long n;
    int i=1,x,t=0,k;
    cin>>n;
    while(n)
        v[i++]=n%10,n/=10;
    k=i-1;
    for(i=1;i<=k;i++)
    {
        x=v[i]*2;
        v[i]=x%10+t;
        if(x>9)
            t=1;
        else
            t=0;
    }
    if(t)
        v[i]=t;
    else
        i--;
    for(;i>=1;i--)
        cout<<v[i];
}