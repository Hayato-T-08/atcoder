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
    string s,t;
    cin >> s >> t;
    vector<vector<int>> dp(s.size() + 1,vector<int>(t.size() + 1,0));

    rep(i,s.size() + 1){
        rep(j,t.size() + 1){
            if(i >= 1 && j >= 1 && s[i-1] == t[j-1]){
                dp[i][j] = min({dp[i-1][j] + 1,dp[i][j-1] + 1,dp[i-1][j-1]});
            }else if(i >= 1 && j >= 1){
                dp[i][j] = min({dp[i-1][j] + 1,dp[i][j-1] + 1,dp[i-1][j-1] + 1});
            }else if(i >= 1){
                dp[i][j] = dp[i-1][j] + 1;
            }else if(j >= 1){
                dp[i][j] = dp[i][j-1] + 1;
            }
        }
    }

    cout << dp[s.size()][t.size()] << endl;
    return 0;
}