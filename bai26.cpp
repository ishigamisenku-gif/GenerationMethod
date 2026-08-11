#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define problem ""


int main()
{
if (fopen(problem".INP","r")){
    freopen(problem".INP","r",stdin);
    freopen(problem".OUT","w",stdout);
}
    ll n,m;
    cin>>n>>m;
    char a[n+m];
    fill(a,a+n,'A');
    fill(a+n,a+n+m,'B');
    do{
        for (char x:a)cout<<x;
        cout<<"\n";
    }
    while (next_permutation(a,a+n+m));
    return 0;
}
