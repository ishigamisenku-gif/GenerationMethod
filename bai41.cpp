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
    vector<string>a(n);
    for (int i=0;i<n;i++)cin>>a[i];
    do{
            cout<<"Lop truong: "<<a[0]<<" Lop pho: "<<a[1]<<" Bi thu: "<<a[2]<<"\n";
    }
    while (next_permutation(a.begin(),a.end()));
    return 0;
}
