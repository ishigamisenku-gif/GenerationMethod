#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define problem ""

void gen(const vector<ll>&a,int k,vector<ll>&cur){
    if(cur.size()==k){
        for(int i=0;i<k;i++)cout<<cur[i]<<(i==k-1?"\n":" ");
        return;
    }
    for(int i=0;i<a.size();i++){
        cur.push_back(a[i]);
        gen(a,k,cur);
        cur.pop_back();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if(fopen(problem".INP","r")){
        freopen(problem".INP","r",stdin);
        freopen(problem".OUT","w",stdout);
    }
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    for(int i=0;i<n;i++)a[i]=i+1;;

    vector<ll>cur;
    gen(a,k,cur);

    return 0;
}
