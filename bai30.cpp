#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define problem ""
ll n;
void gen(ll i, ll x,string&s){
    if (i==n){
        cout<<s<<"\n";
        return;
    }
    s[i]='(';
    gen(i+1,n,s);
    s[i]=')';
    gen(i+1,n,s);
}

int main()
{
if (fopen(problem".INP","r")){
    freopen(problem".INP","r",stdin);
    freopen(problem".OUT","w",stdout);
}
    cin>>n;
    n*=2;
    string s(n,'(');
    gen(0,n,s);
    return 0;
}
