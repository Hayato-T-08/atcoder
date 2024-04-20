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
ll ans = 0;


int main() {
    int n,m;
    cin >> n >> m;
    dsu d(n);
    rep(i,m){
        int a,b;
        cin >> a >> b;
        a--;b--;
        d.merge(a,b);
    }

    auto groups = d.groups();
    for(auto group : groups){
        ll sz = group.size();
        ans += (sz*(sz-1)/2);
    }
    ans -= m;
    cout << ans << endl;
    return 0;
}