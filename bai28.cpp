#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define problem ""

ll n;
void gen(ll i,ll x, string&s){
    if (i==n){
        if (s[n-1]=='0')cout<<s<<"\n";
        return;
    }
    s[i]='0';
    gen(i+1,n,s);
    s[i]='1';
    gen(i+1,n,s);
}
int main()
{
if (fopen(problem".INP","r")){
    freopen(problem".INP","r",stdin);
    freopen(problem".OUT","w",stdout);
}
    cin>>n;
    string s(n,0);
    gen(0,n,s);
    return 0;
}
