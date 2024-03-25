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
vector<int> col;
void dfs(int pos, int cur){
    col[pos] = cur;
    for(auto nx:G[pos]){
        if(col[nx]!=-1) continue;
        dfs(nx,1-cur);
    }
}
int main() {
    cin >> n;
    G.assign(n+1,vector<int>());
    col.assign(n+1,-1);
    rep(i,n-1){
        int a,b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    dfs(1,0);
    int cnt0 = 0;
    int color = 0;
    rep1(i,n){
        if(col[i]==0) cnt0++;
    }
    if(cnt0>=n/2) color = 0;
    else color = 1;
    int cnt = 0;
    rep1(i,n){
        if(cnt == n/2) break;
        if(col[i]==color){
            cout << i << " ";
            cnt++;
        }
    }
    return 0;
}