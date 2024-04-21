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
void chmin(ll& a, ll b){
    if(a > b) a = b;
}
void chmax(ll& a, ll b){
    if(a < b) a = b;
}

int main() {
    int n;
    cin >> n;
    map<ll,ll> mp;
    rep(i,n){
        ll a,c;
        cin >> a >> c;
        if(mp[c] == 0) mp[c] = a;
        else mp[c] = min(mp[c],a);
    }

    ll ans = 0;
    for(auto x: mp){
        ans = max(ans,x.second);
    }
    cout << ans << endl;
    return 0;
}