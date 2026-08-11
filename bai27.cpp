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
    for (int i=0;i<n;i++)cin>>a[i];
    while (true){
        for (auto it:a)cout<<it<<" ";
        cout<<"\n";
        ll i=n-2;
        for (;i>=0;i--){
            if (a[i]<a[i+1])break;
        }
        if (i<0)break;
        ll j=n-1;
        for (;j>i;j--){
            if (a[i]<a[j])break;
        }
        swap(a[i],a[j]);
        for (int l=i+1,r=n-1;l<r;l++,r--){
            swap(a[l],a[r]);
        }

    }
    return 0;
}
