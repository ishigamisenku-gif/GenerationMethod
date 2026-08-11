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
    vector<ll>a(n,0);
    while (true){
        for (int i=0;i<n;i++){
            cout<<a[i];
        }
        cout<<"\n";
        ll i=n-1;
        while (i>=0&&a[i]==1){
            a[i]=0;
            i--;
        }
        if (i<0)break;
        a[i]=1;
    }
    return 0;
}
