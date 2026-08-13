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
    ll n;
    cin>>n;
    vector<ll>a(n);
    for (int i=0;i<n;i++){
        a[i]=i+1;
    }
    do{
        if (a[0]%2!=0)continue;
        for (int i=0;i<n;i++)cout<<a[i]<<" ";
        cout<<"\n";
    }
    while (next_permutation(a.begin(),a.end()));
    return 0;
}
