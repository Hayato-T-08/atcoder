#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
#define rep3(i, m, n) for (int i = (int)(m); i < (int)(n); i++)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;
const int inf = 1e9;
const int mod = 1e9+7;
const ll linf = 1e18;
// int dx[4] = {1,0,-1,0};
// int dy[4] = {0,1,0,-1};
// int dx[8] = {1,1,0,-1,-1,-1,0,1};
// int dy[8] = {0,1,1,1,0,-1,-1,-1};
using ull = unsigned long long;
template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector dp(n,vector<int> (n,0));

    rep(i,n) dp[i][i] = 1;
    rep(i,n-1){
        if(s[i] == s[i+1]) dp[i][i+1] = 2;
    }

    for(int len = 1; len < n; len++){
        for(int l = 0; l+len < n; l++ ){
            int r = l+len;
            chmax(dp[l][r],dp[l+1][r]);
            chmax(dp[l][r],dp[l][r-1]);
            if(s[l] == s[r]) chmax(dp[l][r],dp[l+1][r-1]+2);
        }
    }
    cout << dp[0][n-1] << endl;
    return 0;
}