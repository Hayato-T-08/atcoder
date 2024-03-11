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
    int n;
    cin >> n;
    vector<int> a(n+1,0),p(n+1,0);
    rep1(i,n) cin>> p[i] >> a[i];

    vector<vector<int>> dp(n+1,vector<int>(n+1,0));
    dp[1][n] = 0;

    for(int len = n-2; len >= 0; len--){
        for(int l = 1; l + len <= n; l++){
            int r = l + len;
            int socre1 = 0;
            if(l<=p[l-1] && p[l-1]<=r) socre1 = a[l-1];
            int socre2 = 0;
            if(l<=p[r+1] && p[r+1]<=r) socre2 = a[r+1];
            if(l==1){
                dp[l][r] = max(dp[l][r],dp[l][r+1] + socre2);
            }else if(r==n){
                dp[l][r] = max(dp[l][r],dp[l-1][r] + socre1);
            }else{
                dp[l][r] = max(dp[l-1][r] + socre1,dp[l][r+1] + socre2);
            }
        }
    }
    int ans = 0;
    for(int i=1;i<=n;i++){
        ans = max(ans,dp[i][i]);
    }

    cout << ans << endl;
}