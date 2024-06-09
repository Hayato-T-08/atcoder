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
    vector<int> p(n+1),a(n+1);
    rep1(i,n) cin >> p[i] >> a[i];
    vector<vector<int>> dp(n+1,vector<int> (n+1,0));
    dp[1][n] = 0;
    for(int len = n-2;len >= 0; len--){//r-lの値が大きい順に処理する
        for(int l = 1; l<= n-len; l++){//l+len <= n
            int r = len + l;
            int scoreL = (p[l-1] >= l and p[l-1] <= r) ? a[l-1] : 0;
            int scoreR = (p[r+1] >= l and p[r+1] <= r) ? a[r+1] : 0;
            
            if(l >=2) chmax(dp[l][r],dp[l-1][r] + scoreL);
            if(r <= n - 1) chmax(dp[l][r],dp[l][r+1] + scoreR);
        }
    }
    int ans = 0;
    rep(i,n) chmax(ans,dp[i][i]);
    cout << ans << endl;
    return 0;
}