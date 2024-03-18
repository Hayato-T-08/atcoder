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
vector<bool> seen;
Graph G;
void dfs(int v){
    seen[v] = true;
    for(auto next_v : G[v]){
        if(seen[next_v]) continue;
        dfs(next_v);
    }
}
int main() {
    int n,m;
    cin >> n >> m;
    G.resize(n+1);
    seen.resize(n+1,false);
    rep(i,m){
        int a,b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    string ans = "The graph is connected.";
    dfs(1);
    rep1(i,n){
        if(!seen[i]){
            ans = "The graph is not connected.";
            break;
        }
    }
    cout << ans << endl;
    return 0;
}