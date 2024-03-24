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
    string s;
    cin >> s;
    vector<vector<mint>> dp(n+1,vector<mint>(8,0));
    dp[0][0] = 1;
    string t = "atcoder";
    rep(i,n){
        rep(j,8){
            dp[i+1][j] += dp[i][j];
            if(s[i] == t[j]) dp[i+1][j+1] += dp[i][j];
        }
    }
    cout << dp[n][7].val() << endl;
    return 0;
}