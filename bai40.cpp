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
    set<string>se;
    string n;
    cin>>n;
    //vector<string>res;
    do{
        string cur="";
        for (int i=0;i<n.size();i++){
            cur+=n[i];
            if (se.find(cur)==se.end()){
                cout<<cur<<"\n";
                se.insert(cur);
            }
        }
    }
    while (next_permutation(n.begin(),n.end()));
    return 0;
}
