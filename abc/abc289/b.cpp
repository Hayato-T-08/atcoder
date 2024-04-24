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
void chmin(int& a, int b){
    if(a > b) a = b;
}
void chmax(int& a, int b){
    if(a < b) a = b;
}

int main() {
    int n,m;
    cin >> n >> m;
    scc_graph g(n);
    rep(i,m){
        int a;
        cin >> a;
        a--;
        g.add_edge(a,a+1);
        g.add_edge(a+1,a);
    }

    auto scc = g.scc();
    sort(scc.begin(),scc.end());
    rep(i,scc.size()){
        sort(scc[i].begin(),scc[i].end());
        reverse(scc[i].begin(),scc[i].end());
    }
    rep(i,scc.size()){
        for(auto x : scc[i]){
            cout << x + 1 << " ";
        }
    }
    return 0;
}