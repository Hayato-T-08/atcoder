#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    vector<string> s(n);
    rep(i,n) cin>>s[i];
    int m;
    cin>>m;
    vector<string> t(m);
    rep(i,m) cin>>t[i];

    map<string,int> mp;
    rep(i,n) mp[s[i]]++;
    rep(i,m) mp[t[i]]--;
    int maxv=-1000;
    rep(i,n){
        maxv=max(mp[s[i]],maxv);
    }
    cout<<max(maxv,0)<<endl;
}