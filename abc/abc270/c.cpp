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
// int dx[4] = {1,0,-1,0};
// int dy[4] = {0,1,0,-1};
// int dx[8] = {1,1,0,-1,-1,-1,0,1};
// int dy[8] = {0,1,1,1,0,-1,-1,-1};
using ull = unsigned long long;
template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
int main() {
    int n,x,y;
    cin >> n >> x >> y;
    x--; y--;
    Graph G(n);
    rep(i,n-1){
        int u,v;
        cin >> u >> v;
        u--; v--;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    vector<bool> seen(n,false);
    stack<int> st;
    vector<int> ans;
    bool stop = false;
    auto dfs = [&](auto self, int v) -> void {
        if(!stop) st.push(v);
        if(v == y) stop = true;
        seen[v] = true;
        for(auto next_v : G[v]){
            if(seen[next_v]) continue;
            self(self,next_v);
        }
        if(!stop) st.pop();
        return;
    };

    dfs(dfs,x);
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    rep(i,ans.size()){
        cout << ans[i] + 1 << " ";
    }
    return 0;
}