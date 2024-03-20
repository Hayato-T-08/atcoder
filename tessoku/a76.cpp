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
    int n,w,l,r;
    cin >> n >> w >> l >> r;
    vector<int> x(n+2);
    x[0] = 0;
    x[n+1] = w;
    rep1(i,n) cin >> x[i];
    vector<int> dp(n+2, 0), sum(n+2, 0);
    dp[0] = 1;
    sum[0] = 1;
    rep1(i,n+1){
        auto itl = lower_bound(x.begin(), x.end(), x[i]-r);
        auto itr = lower_bound(x.begin(), x.end(), x[i] - l + 1);
        itr--;
        int l = distance(x.begin(), itl);
        int r = distance(x.begin(), itr);
        dp[i] = sum[r];
        if(l >= 1) dp[i] -= sum[l-1];
        dp[i] = (dp[i] + mod) % mod;

        sum[i] = sum[i-1] + dp[i];
        sum[i] %= mod;
    }
    cout << dp[n+1] << endl;
    return 0;
}