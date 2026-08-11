#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define problem ""

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if(fopen(problem".INP","r")){
        freopen(problem".INP","r",stdin);
        freopen(problem".OUT","w",stdout);
    }
    ll n;
    cin>>n;
    vector<ll>a(n);
    for (int i=0;i<n;i++)a[i]=i+1;
    do{
        for (auto it:a)cout<<it<<" ";
        cout<<"\n";
    }
    while(next_permutation(a.begin(),a.end()));
    return 0;
}
