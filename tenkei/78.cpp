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

int main() {
    int n,m;
    cin >> n >> m;
    Graph g(n+1);
    rep1(i,m){
        int a,b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    ll ans = 0;
    rep1(i,n){
        int cnt = 0;
        for(auto j : g[i]){
            if(i > j) cnt++;
        }
        if(cnt == 1) ans++;
    }

    cout << ans << endl;
    return 0;
}