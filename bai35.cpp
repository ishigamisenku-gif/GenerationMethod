#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define problem ""

void gen(int n,string &s){
    if(s.length()==n){
        cout<<s<<"\n";
        return;
    }
    for(char c='0';c<='9';c++){
        if(s.empty()&&c=='0'&& n>1) continue;
        s.push_back(c);
        gen(n,s);
        s.pop_back();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if(fopen(problem".INP","r")){
        freopen(problem".INP","r",stdin);
        freopen(problem".OUT","w",stdout);
    }
    ll n;cin>>n;
    string s="";
    string g(n,'0');
    cout<<g<<"\n";
    gen(n,s);

    return 0;
}
