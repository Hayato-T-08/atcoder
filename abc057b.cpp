#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n,m;
    cin>>n>>m;

    vector<pair<ll,ll>> ab(n),cd(m);
    vector<int> ans(n);
    rep(i,n) cin>>ab[i].first>>ab[i].second;
    rep(i,m) cin>>ab[i].first >> ab[i].second;

    rep(i,n){
        
        ll val=1e9;
        rep(j,m){
            
            if(val>abs(ab[i].first-cd[j].first)+abs(ab[i].second-cd[j].second)){
                val=abs(ab[i].first-cd[j].first)+abs(ab[i].second-cd[j].second);
                ans[i]=j+1;
                cout<<val<<j+1<<endl;
            }
            
        }
        
    }

    rep(i,n) cout<<ans[i]<<endl;
}