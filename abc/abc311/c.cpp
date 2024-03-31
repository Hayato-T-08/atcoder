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

int n;
Graph G;
vector<int> ans;
vector<bool> seen,seen2;
void dfs(int v){
    seen[v] = true;
    for(auto nv : G[v]){
        if(seen2[nv]) return;
        if(seen[nv]){
            ans.push_back(nv+1);
            seen2[nv] = true;
        }
        dfs(nv);
    }
    return;
}
int main() {

    cin >> n;
    G.resize(n);
    rep(i,n){
        int a;
        cin >> a;
        a--;
        G[i].push_back(a);
    }
    seen.resize(n,false);
    seen2.resize(n,false);
    dfs(0);
    cout << ans.size() << endl;
    for(auto a : ans){
        cout << a << " ";
    }
    cout << endl;
    return 0;
}