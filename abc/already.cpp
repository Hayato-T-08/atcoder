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
using ull = unsigned long long;
int main() {
    int n,m;
    cin >> n >> m;
    Graph G(n);
    vector<int> a(m),b(m);
    rep(i,m){
        cin >> a[i];
        a[i]--;
    }

    rep(i,m){
        cin >> b[i];
        b[i]--;
    }

    rep(i,m){
        G[a[i]].push_back(b[i]);
        G[b[i]].push_back(a[i]);
    }
    vector<int> color(n,-1);
    auto f = [&](auto self, int v, int c) -> bool{
        color[v] = c;
        for(int nv : G[v]){
            if(color[nv] == c) return false;
            if(color[nv] == -1 && !self(self,nv,c^1)) return false;
        }
        return true;
    };
    ll ans = true;
    rep(i,n){
        if(color[i] != -1) continue;
        if(!f(f,i,0)){
            ans = false;
            break;
        }
    }
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}