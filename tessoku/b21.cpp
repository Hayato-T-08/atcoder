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
    string s;
    cin >> s;
    vector<vector<int>> dp(n,vector<int>(n,0));
    for(int i = 0;i<n;i++) dp[i][i] = 1;
    for(int i=0;i<n-1;i++){
        if(s[i] == s[i+1]) dp[i][i+1] = 2;
        else{
            dp[i][i+1] = 1;
        
        }
    }

    for(int len = 2;len<=n-1;len++){
        for(int l = 0;l < n-len; l++){
            int r = l + len;
            if(s[l] == s[r]) dp[l][r] = max({dp[l][r-1], dp[l+1][r], dp[l+1][r-1]+2});
            else dp[l][r] = max(dp[l+1][r],dp[l][r-1]);
        }
    }
    cout << dp[0][n-1] << endl;
    return 0;
}