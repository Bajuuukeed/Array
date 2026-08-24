#include<bits/stdc++.h>
//Se dă numărul natural n. Afișați al n-lea număr impar. -- reprezentarea lu n este inclusiv pe 64 de biti fara semn
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
    t=0;
    for(int j=1;j<=i;j++)
    {
        if(v[j]==0)
            v[j]=9,t=1;
        else
            if(j==1)
                v[j]-=1;
            else
            {
                v[j]-=t,t=0;
                break;
            }
    }
    t=0;
    for(;i>=1;i--)
    {
        if(v[i]!=0)
            t=1;
        if(t)
            cout<<v[i];
    }
}