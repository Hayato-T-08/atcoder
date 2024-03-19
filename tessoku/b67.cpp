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
    vector<int> a(m+1),b(m+1),c(m+1);
    vector<P> edge;
    dsu uf(n+1);
    rep1(i,m){
        cin >> a[i] >> b[i] >> c[i];
    }

    rep1(i,m){
        edge.push_back({-c[i],i});
    }
    sort(edge.begin(),edge.end());
    ll ans = 0;
    rep(i,m){
        if(!uf.same(a[edge[i].second],b[edge[i].second])){
            uf.merge(a[edge[i].second],b[edge[i].second]);
            ans += -edge[i].first;
        }
    }

    cout << ans << endl;
    return 0;
}