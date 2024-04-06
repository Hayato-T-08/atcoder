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
Graph G;
vector<bool> seen;
vector<int> ans;
int dfs(int pos){
    seen[pos] = true;
    for(auto next : G[pos]){
        if(seen[next]) {continue;}
        int ret = dfs(next);
        ans[pos] +=ret;
    }
    return ans[pos];

}
int main() {
    int n;
    cin >> n;
    G.resize(n);
    seen.assign(n, false);
    ans.assign(n, 1);
    rep(i,n-1){
        int a,b;
        cin >> a >> b;
        a--;b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    dfs(0);
    int ans1 = n;
    for(int i=1;i<n;i++){
        ans1 = min(ans1,n-ans[i]);
    }
    cout << ans1 << endl;
    return 0;
}