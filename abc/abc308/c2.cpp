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
int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
int main() {
    int h,w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i,h) cin >> s[i];
    int cnt2 = 0;
    rep(i,h)rep(j,w){
        if(s[i][j] == '.') cnt2++;
    }
    scc_graph g(h*w);
    rep(i,h)rep(j,w){
        if(s[i][j] == '#'){
            int u = i*w + j;
            rep(k,8){
                int ni = i + dx[k];
                int nj = j + dy[k];
                if(ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
                if(s[ni][nj] == '#'){
                    int v = ni*w + nj;
                    g.add_edge(u,v);
                    g.add_edge(v,u);
                }
            }
        }
    }
    auto scc = g.scc();
    ll ans = 0;

    cout << scc.size()-cnt2 << endl;
    return 0;
}