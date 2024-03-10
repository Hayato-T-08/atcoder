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
int main() {
    int n,w;
    cin >> n >> w;
    vector<P> wv(n+1);
    rep1(i,n){
        cin >> wv[i].first >> wv[i].second;
    }

    vector<vector<ll>> dp(n+1,vector<ll>(w+1,-100000));
    dp[0][0] = 0;

    rep1(i,n){
        rep(j,w+1){
            if(j < wv[i].first){
                dp[i][j] = dp[i-1][j];
            }else{
                dp[i][j] = max(dp[i-1][j],dp[i-1][j-wv[i].first]+wv[i].second);
            }
        }
    }

    ll ans = 0;
    rep(i,w+1){
        ans = max(ans,dp[n][i]);
    }

    cout << ans << endl;
    return 0;
}