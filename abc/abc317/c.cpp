#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
#define rep3(i, m, n) for (int i = (int)(m); i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;
const int inf = 1e9;
const int mod = 1e9+7;
const ll linf = 1e18;
int n,m;
vector<vector<pair<ll,ll>>> g;
vector<bool> seen;
ll val = -linf;
void dfs(int v, ll costs){
    seen[v] = true;
    val = max(val,costs);
    for(auto next_v : g[v]){
        if(seen[next_v.second]) continue;
        dfs(next_v.second,costs+next_v.first);
    }
    seen[v] = false;
}
int main() {
    cin >> n >> m;
    g.resize(n);
    rep(i,m){
        ll a,b,c;
        cin >> a >> b >> c;
        a--; b--;
        g[a].push_back({c,b});
        g[b].push_back({c,a});
    }
    seen.assign(n,false);

    rep(i,n){
        dfs(i,0);
    }
    cout << val << endl;

    return 0;
}