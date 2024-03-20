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
    vector<P> td(n);
    rep(i,n){
        int t,d;
        cin >> t >> d;
        td[i] = {d,t};
    }
    vector<vector<int>> dp(n+1,vector<int>(1450,-1));
    sort(td.begin(),td.end());
    int ans = -100;
    ll curT = 0;
    dp[0][0] = 0;
    rep1(i,n){
        rep(j,1441){
            if(j < td[i-1].second || j > td[i-1].first) dp[i][j] = dp[i-1][j]; 
            else dp[i][j] = max(dp[i-1][j],dp[i-1][j-td[i-1].second]+1);
        }
    }
    rep1(i,1440){
        ans = max(ans,dp[n][i]);
    }
    cout << ans << endl;
    return 0;
}