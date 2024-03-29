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
    int n;
    cin >> n;
    vector<ll> x(n+1),y(n+1);
    rep1(i,n){
        cin >> x[i] >> y[i];
    }

    vector<vector<ll>> dp(n+1,vector<ll>(2,-linf));
    dp[0][0] = 0;
    rep1(i,n){
        if(x[i] == 1){
            dp[i][1] = max(dp[i-1][0]+y[i],dp[i-1][1]);
            dp[i][0] = dp[i-1][0];
        }else{
            dp[i][0] = max(dp[i-1][0],max(dp[i-1][1],dp[i-1][0])+y[i]);
            dp[i][1] = dp[i-1][1];
        }
    }
    cout << max(dp[n][0],dp[n][1]) << endl;
    return 0;
}