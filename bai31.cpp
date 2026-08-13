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
    ll n;;
    cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        a[i]=i+1;
    }
    ll c=1;
    cout<<"\n";
    for (int i=0;i<n;i++){
        for (int j=0;j<c;j++){
            cout<<a[j]<<" ";
        }
        cout<<"\n";
        c++;
    }
    return 0;
}
