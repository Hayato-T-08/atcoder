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
// int dx[4] = {1,0,-1,0};
// int dy[4] = {0,1,0,-1};
// int dx[8] = {1,1,0,-1,-1,-1,0,1};
// int dy[8] = {0,1,1,1,0,-1,-1,-1};
using ull = unsigned long long;
void chmin(int& a, int b){
    if(a > b) a = b;
}
void chmax(int& a, int b){
    if(a < b) a = b;
}

int main() {
    int n,d,p;
    cin >> n >> d >> p;
    vector<int> f(n);
    rep(i,n) cin >> f[i];
    sort(f.begin(),f.end());
    vector<ll> sum(n+1);
    rep(i,n){
        sum[i+1] = sum[i] + f[i];
    }

    ll ans = linf;
    rep(i,inf){//パスの枚数
        int r = max(0, n - i*d);//パスを使わない日の数
        ll now = sum[r] + (ll)i*p;//r日目までの合計金額
        ans = min(ans, now);
        if(r == 0) break;
    }
    cout << ans << endl;
    return 0;
}