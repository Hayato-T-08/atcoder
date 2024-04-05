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
vector<int> a,b;
vector<int> col;
Graph g;
bool ok = true;
void dfs(int v,int c){
    col[v] = c;
    for(auto nv : g[v]){
        if(col[nv] == -1){
            dfs(nv,1-c);
        }else if(col[nv] == c){
            ok = false;
        }
    }
}
int main() {
    cin >> n >> m;
    a.resize(m);
    b.resize(m);
    rep(i,m) cin >> a[i], a[i]--;
    rep(i,m) cin >> b[i], b[i]--;
    g.resize(n);
    col.assign(n,-1);
    rep(i,m){
        g[a[i]].push_back(b[i]);
        g[b[i]].push_back(a[i]);
    }
    rep(i,n){
        if(col[i] != -1) continue;
        dfs(i,0);
    }
    cout << (ok ? "Yes" : "No") << endl;
    return 0;
}