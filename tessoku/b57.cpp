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
    ll n,k;
    cin >> n >> k;
    vector<vector<int>> dp(32,vector<int>(n+1));

    rep1(i,n){
        string s = to_string(i);
        dp[0][i] = i;
        rep(j,s.size()){
            dp[0][i] -= (s[j] - '0');
        }
    }

    rep1(i,29){
        rep1(j,n){
            dp[i][j] = dp[i-1][dp[i-1][j]];
        }
    }

    rep1(i,n){
        int cur = i;
        for(int d = 29; d>=0; d--){
            if((k/(1<<d))%2 == 1){
                cur = dp[d][cur];
            }
        }
        cout << cur << endl;
    }
    return 0;
}