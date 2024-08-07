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

int main() {
    int n,W;
    cin >> n >> W;
    vector<int> w(n),v(n);
    rep(i,n) cin >> w[i] >> v[i];
    vector<vector<ll>> dp(n+1,vector<ll>(W+1,0));
    rep(i,n){
        rep(j,W+1){
            if (j-w[i] >= 0) {
                dp[i+1][j] = max(dp[i+1][j], dp[i][j-w[i]]+v[i]);
            }
            dp[i+1][j] = max(dp[i+1][j], dp[i][j]);
        }
    }
    ll ans = -1;
    rep(i,W+1){
        ans = max(ans, dp[n][i]);
    }
    cout << ans << endl;
    return 0;
}