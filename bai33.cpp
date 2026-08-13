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
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    for (int i=0;i<n;i++)a[i]=i+1;
    do{
        cout<<"A: ";
        for (int i=0;i<n;i++){
            if (i==k)cout<<"B: ";
            cout<<a[i]<<"  ";
        }
        cout<<"\n";
    }
    while (next_permutation(a.begin(),a.end()));
    return 0;
}
