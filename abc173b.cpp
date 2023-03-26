#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    map<string,int> mp={
        {"AC",0},
        {"WA",0},
        {"TLE",0},
        {"RE",0}
    };

    rep(i,n){
        string s;
        cin>>s;
        mp[s]++;
    }
    for(auto x:mp){
        cout<<x.first<<" "<<"x"<<" "<<x.second<<endl;
    }
}